/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ContinuousBackupsDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API DescribeContinuousBackupsResult
  {
  public:
    DescribeContinuousBackupsResult();
    DescribeContinuousBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeContinuousBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline const ContinuousBackupsDescription& GetContinuousBackupsDescription() const{ return m_continuousBackupsDescription; }

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline void SetContinuousBackupsDescription(const ContinuousBackupsDescription& value) { m_continuousBackupsDescription = value; }

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline void SetContinuousBackupsDescription(ContinuousBackupsDescription&& value) { m_continuousBackupsDescription = std::move(value); }

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline DescribeContinuousBackupsResult& WithContinuousBackupsDescription(const ContinuousBackupsDescription& value) { SetContinuousBackupsDescription(value); return *this;}

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline DescribeContinuousBackupsResult& WithContinuousBackupsDescription(ContinuousBackupsDescription&& value) { SetContinuousBackupsDescription(std::move(value)); return *this;}

  private:

    ContinuousBackupsDescription m_continuousBackupsDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
