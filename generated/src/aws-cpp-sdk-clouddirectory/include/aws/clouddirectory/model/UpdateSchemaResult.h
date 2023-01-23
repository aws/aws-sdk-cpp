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
  class UpdateSchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API UpdateSchemaResult();
    AWS_CLOUDDIRECTORY_API UpdateSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API UpdateSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that is associated with the updated schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN that is associated with the updated schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    /**
     * <p>The ARN that is associated with the updated schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    /**
     * <p>The ARN that is associated with the updated schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    /**
     * <p>The ARN that is associated with the updated schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline UpdateSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN that is associated with the updated schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline UpdateSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that is associated with the updated schema. For more information, see
     * <a>arns</a>.</p>
     */
    inline UpdateSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

  private:

    Aws::String m_schemaArn;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
