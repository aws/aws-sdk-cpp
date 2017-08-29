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
  class AWS_CLOUDDIRECTORY_API CreateDirectoryResult
  {
  public:
    CreateDirectoryResult();
    CreateDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArn = value; }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArn = std::move(value); }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArn.assign(value); }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline CreateDirectoryResult& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline CreateDirectoryResult& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline CreateDirectoryResult& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline CreateDirectoryResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline CreateDirectoryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <a>Directory</a>.</p>
     */
    inline CreateDirectoryResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The root object node of the created directory.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The root object node of the created directory.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifier = value; }

    /**
     * <p>The root object node of the created directory.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifier = std::move(value); }

    /**
     * <p>The root object node of the created directory.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifier.assign(value); }

    /**
     * <p>The root object node of the created directory.</p>
     */
    inline CreateDirectoryResult& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The root object node of the created directory.</p>
     */
    inline CreateDirectoryResult& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The root object node of the created directory.</p>
     */
    inline CreateDirectoryResult& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}


    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetAppliedSchemaArn() const{ return m_appliedSchemaArn; }

    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline void SetAppliedSchemaArn(const Aws::String& value) { m_appliedSchemaArn = value; }

    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline void SetAppliedSchemaArn(Aws::String&& value) { m_appliedSchemaArn = std::move(value); }

    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline void SetAppliedSchemaArn(const char* value) { m_appliedSchemaArn.assign(value); }

    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryResult& WithAppliedSchemaArn(const Aws::String& value) { SetAppliedSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryResult& WithAppliedSchemaArn(Aws::String&& value) { SetAppliedSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the published schema in the <a>Directory</a>. Once a published
     * schema is copied into the directory, it has its own ARN, which is referred to
     * applied schema ARN. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryResult& WithAppliedSchemaArn(const char* value) { SetAppliedSchemaArn(value); return *this;}

  private:

    Aws::String m_directoryArn;

    Aws::String m_name;

    Aws::String m_objectIdentifier;

    Aws::String m_appliedSchemaArn;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
