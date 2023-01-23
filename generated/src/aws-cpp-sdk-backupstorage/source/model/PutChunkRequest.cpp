/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/PutChunkRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

PutChunkRequest::PutChunkRequest() : 
    m_backupJobIdHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_chunkIndex(0),
    m_chunkIndexHasBeenSet(false),
    m_length(0),
    m_lengthHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_checksumAlgorithm(DataChecksumAlgorithm::NOT_SET),
    m_checksumAlgorithmHasBeenSet(false)
{
}


void PutChunkRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_lengthHasBeenSet)
    {
      ss << m_length;
      uri.AddQueryStringParameter("length", ss.str());
      ss.str("");
    }

    if(m_checksumHasBeenSet)
    {
      ss << m_checksum;
      uri.AddQueryStringParameter("checksum", ss.str());
      ss.str("");
    }

    if(m_checksumAlgorithmHasBeenSet)
    {
      ss << DataChecksumAlgorithmMapper::GetNameForDataChecksumAlgorithm(m_checksumAlgorithm);
      uri.AddQueryStringParameter("checksum-algorithm", ss.str());
      ss.str("");
    }

}

