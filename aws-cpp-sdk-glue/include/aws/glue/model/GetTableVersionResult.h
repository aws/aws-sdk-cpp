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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TableVersion.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetTableVersionResult
  {
  public:
    GetTableVersionResult();
    GetTableVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTableVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested table version.</p>
     */
    inline const TableVersion& GetTableVersion() const{ return m_tableVersion; }

    /**
     * <p>The requested table version.</p>
     */
    inline void SetTableVersion(const TableVersion& value) { m_tableVersion = value; }

    /**
     * <p>The requested table version.</p>
     */
    inline void SetTableVersion(TableVersion&& value) { m_tableVersion = std::move(value); }

    /**
     * <p>The requested table version.</p>
     */
    inline GetTableVersionResult& WithTableVersion(const TableVersion& value) { SetTableVersion(value); return *this;}

    /**
     * <p>The requested table version.</p>
     */
    inline GetTableVersionResult& WithTableVersion(TableVersion&& value) { SetTableVersion(std::move(value)); return *this;}

  private:

    TableVersion m_tableVersion;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
