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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API AddLayerVersionPermissionResult
  {
  public:
    AddLayerVersionPermissionResult();
    AddLayerVersionPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddLayerVersionPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The permission statement.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p>The permission statement.</p>
     */
    inline void SetStatement(const Aws::String& value) { m_statement = value; }

    /**
     * <p>The permission statement.</p>
     */
    inline void SetStatement(Aws::String&& value) { m_statement = std::move(value); }

    /**
     * <p>The permission statement.</p>
     */
    inline void SetStatement(const char* value) { m_statement.assign(value); }

    /**
     * <p>The permission statement.</p>
     */
    inline AddLayerVersionPermissionResult& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p>The permission statement.</p>
     */
    inline AddLayerVersionPermissionResult& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p>The permission statement.</p>
     */
    inline AddLayerVersionPermissionResult& WithStatement(const char* value) { SetStatement(value); return *this;}


    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline AddLayerVersionPermissionResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline AddLayerVersionPermissionResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline AddLayerVersionPermissionResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_statement;

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
