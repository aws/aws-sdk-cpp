/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/CreateS3DataAccessFromS3BucketRequestDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

CreateS3DataAccessFromS3BucketRequestDetails::CreateS3DataAccessFromS3BucketRequestDetails() : 
    m_assetSourceHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

CreateS3DataAccessFromS3BucketRequestDetails::CreateS3DataAccessFromS3BucketRequestDetails(JsonView jsonValue) : 
    m_assetSourceHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

CreateS3DataAccessFromS3BucketRequestDetails& CreateS3DataAccessFromS3BucketRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetSource"))
  {
    m_assetSource = jsonValue.GetObject("AssetSource");

    m_assetSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateS3DataAccessFromS3BucketRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetSourceHasBeenSet)
  {
   payload.WithObject("AssetSource", m_assetSource.Jsonize());

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
