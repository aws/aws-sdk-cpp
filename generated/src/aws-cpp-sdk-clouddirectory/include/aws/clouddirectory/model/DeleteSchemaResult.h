/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class DeleteSchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API DeleteSchemaResult();
    AWS_CLOUDDIRECTORY_API DeleteSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API DeleteSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The input ARN that is returned as part of the response. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The input ARN that is returned as part of the response. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    /**
     * <p>The input ARN that is returned as part of the response. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    /**
     * <p>The input ARN that is returned as part of the response. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    /**
     * <p>The input ARN that is returned as part of the response. For more information,
     * see <a>arns</a>.</p>
     */
    inline DeleteSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The input ARN that is returned as part of the response. For more information,
     * see <a>arns</a>.</p>
     */
    inline DeleteSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The input ARN that is returned as part of the response. For more information,
     * see <a>arns</a>.</p>
     */
    inline DeleteSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

  private:

    Aws::String m_schemaArn;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
