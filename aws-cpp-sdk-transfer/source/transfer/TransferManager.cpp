/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/transfer/TransferManager.h>

namespace Aws
{
    namespace Transfer
    {
        static const char* const CLASS_TAG = "Aws::Transfer::TransferManager";

        TransferManager::TransferManager(const TransferManagerConfiguration& configuration) : m_transferConfig(configuration)
        {
            assert(m_transferConfig.s3Client != nullptr);
            if (m_transferConfig.transferExecutor == nullptr)
            {
                m_transferConfig.transferExecutor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(CLASS_TAG, m_transferConfig.maxParallelTransfers);
            }

            for (unsigned i = 0; i < m_transferConfig.transferBufferMaxHeapSize; i += MB5_BUFFER_SIZE)
            {                
                m_bufferManager.PutResource(Aws::New<Aws::Utils::Array<uint8_t>>(CLASS_TAG, MB5_BUFFER_SIZE));
            }
        }
    }
}