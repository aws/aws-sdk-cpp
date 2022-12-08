/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ActionSource.h>
#include <aws/sagemaker/model/ActionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/MetadataProperties.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeActionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeActionResult();
    AWS_SAGEMAKER_API DescribeActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionName = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionName = std::move(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const char* value) { m_actionName.assign(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline DescribeActionResult& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline DescribeActionResult& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline DescribeActionResult& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(const Aws::String& value) { m_actionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(Aws::String&& value) { m_actionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(const char* value) { m_actionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline DescribeActionResult& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline DescribeActionResult& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline DescribeActionResult& WithActionArn(const char* value) { SetActionArn(value); return *this;}


    /**
     * <p>The source of the action.</p>
     */
    inline const ActionSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the action.</p>
     */
    inline void SetSource(const ActionSource& value) { m_source = value; }

    /**
     * <p>The source of the action.</p>
     */
    inline void SetSource(ActionSource&& value) { m_source = std::move(value); }

    /**
     * <p>The source of the action.</p>
     */
    inline DescribeActionResult& WithSource(const ActionSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the action.</p>
     */
    inline DescribeActionResult& WithSource(ActionSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The type of the action.</p>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of the action.</p>
     */
    inline void SetActionType(const Aws::String& value) { m_actionType = value; }

    /**
     * <p>The type of the action.</p>
     */
    inline void SetActionType(Aws::String&& value) { m_actionType = std::move(value); }

    /**
     * <p>The type of the action.</p>
     */
    inline void SetActionType(const char* value) { m_actionType.assign(value); }

    /**
     * <p>The type of the action.</p>
     */
    inline DescribeActionResult& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of the action.</p>
     */
    inline DescribeActionResult& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}

    /**
     * <p>The type of the action.</p>
     */
    inline DescribeActionResult& WithActionType(const char* value) { SetActionType(value); return *this;}


    /**
     * <p>The description of the action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the action.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the action.</p>
     */
    inline DescribeActionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the action.</p>
     */
    inline DescribeActionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the action.</p>
     */
    inline DescribeActionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the action.</p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const ActionStatus& value) { m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(ActionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline DescribeActionResult& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline DescribeActionResult& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of the action's properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_properties = value; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_properties = std::move(value); }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& AddProperties(const Aws::String& key, const Aws::String& value) { m_properties.emplace(key, value); return *this; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& AddProperties(Aws::String&& key, const Aws::String& value) { m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& AddProperties(const Aws::String& key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& AddProperties(Aws::String&& key, Aws::String&& value) { m_properties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& AddProperties(const char* key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& AddProperties(Aws::String&& key, const char* value) { m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the action's properties.</p>
     */
    inline DescribeActionResult& AddProperties(const char* key, const char* value) { m_properties.emplace(key, value); return *this; }


    /**
     * <p>When the action was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the action was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the action was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the action was created.</p>
     */
    inline DescribeActionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the action was created.</p>
     */
    inline DescribeActionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }

    
    inline DescribeActionResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline DescribeActionResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>When the action was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the action was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the action was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the action was last modified.</p>
     */
    inline DescribeActionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the action was last modified.</p>
     */
    inline DescribeActionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }

    
    inline DescribeActionResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline DescribeActionResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }

    
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataProperties = value; }

    
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataProperties = std::move(value); }

    
    inline DescribeActionResult& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}

    
    inline DescribeActionResult& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline DescribeActionResult& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline DescribeActionResult& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline DescribeActionResult& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}

  private:

    Aws::String m_actionName;

    Aws::String m_actionArn;

    ActionSource m_source;

    Aws::String m_actionType;

    Aws::String m_description;

    ActionStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_properties;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    MetadataProperties m_metadataProperties;

    Aws::String m_lineageGroupArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
