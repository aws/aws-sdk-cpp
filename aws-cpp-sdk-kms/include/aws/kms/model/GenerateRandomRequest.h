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
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API GenerateRandomRequest : public KMSRequest
  {
  public:
    GenerateRandomRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Integer that contains the number of bytes to generate. Common values are 128,
     * 256, 512, 1024 and so on. The current limit is 1024 bytes.</p>
     */
    inline int GetNumberOfBytes() const{ return m_numberOfBytes; }

    /**
     * <p>Integer that contains the number of bytes to generate. Common values are 128,
     * 256, 512, 1024 and so on. The current limit is 1024 bytes.</p>
     */
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }

    /**
     * <p>Integer that contains the number of bytes to generate. Common values are 128,
     * 256, 512, 1024 and so on. The current limit is 1024 bytes.</p>
     */
    inline GenerateRandomRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}

  private:
    int m_numberOfBytes;
    bool m_numberOfBytesHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
