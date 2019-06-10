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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DatasetSchema.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeSchemaResult
  {
  public:
    DescribeSchemaResult();
    DescribeSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested schema.</p>
     */
    inline const DatasetSchema& GetSchema() const{ return m_schema; }

    /**
     * <p>The requested schema.</p>
     */
    inline void SetSchema(const DatasetSchema& value) { m_schema = value; }

    /**
     * <p>The requested schema.</p>
     */
    inline void SetSchema(DatasetSchema&& value) { m_schema = std::move(value); }

    /**
     * <p>The requested schema.</p>
     */
    inline DescribeSchemaResult& WithSchema(const DatasetSchema& value) { SetSchema(value); return *this;}

    /**
     * <p>The requested schema.</p>
     */
    inline DescribeSchemaResult& WithSchema(DatasetSchema&& value) { SetSchema(std::move(value)); return *this;}

  private:

    DatasetSchema m_schema;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
