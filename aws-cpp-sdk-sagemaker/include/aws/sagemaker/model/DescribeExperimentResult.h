/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ExperimentSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
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
  class DescribeExperimentResult
  {
  public:
    AWS_SAGEMAKER_API DescribeExperimentResult();
    AWS_SAGEMAKER_API DescribeExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentName = value; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline DescribeExperimentResult& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline DescribeExperimentResult& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline DescribeExperimentResult& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetExperimentArn() const{ return m_experimentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(const Aws::String& value) { m_experimentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(Aws::String&& value) { m_experimentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(const char* value) { m_experimentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline DescribeExperimentResult& WithExperimentArn(const Aws::String& value) { SetExperimentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline DescribeExperimentResult& WithExperimentArn(Aws::String&& value) { SetExperimentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline DescribeExperimentResult& WithExperimentArn(const char* value) { SetExperimentArn(value); return *this;}


    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline DescribeExperimentResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline DescribeExperimentResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline DescribeExperimentResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the type.</p>
     */
    inline const ExperimentSource& GetSource() const{ return m_source; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the type.</p>
     */
    inline void SetSource(const ExperimentSource& value) { m_source = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the type.</p>
     */
    inline void SetSource(ExperimentSource&& value) { m_source = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the type.</p>
     */
    inline DescribeExperimentResult& WithSource(const ExperimentSource& value) { SetSource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the type.</p>
     */
    inline DescribeExperimentResult& WithSource(ExperimentSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the experiment.</p>
     */
    inline DescribeExperimentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the experiment.</p>
     */
    inline DescribeExperimentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the experiment.</p>
     */
    inline DescribeExperimentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>When the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the experiment was created.</p>
     */
    inline DescribeExperimentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the experiment was created.</p>
     */
    inline DescribeExperimentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Who created the experiment.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Who created the experiment.</p>
     */
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }

    /**
     * <p>Who created the experiment.</p>
     */
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }

    /**
     * <p>Who created the experiment.</p>
     */
    inline DescribeExperimentResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Who created the experiment.</p>
     */
    inline DescribeExperimentResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>When the experiment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline DescribeExperimentResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline DescribeExperimentResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Who last modified the experiment.</p>
     */
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>Who last modified the experiment.</p>
     */
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }

    /**
     * <p>Who last modified the experiment.</p>
     */
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }

    /**
     * <p>Who last modified the experiment.</p>
     */
    inline DescribeExperimentResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>Who last modified the experiment.</p>
     */
    inline DescribeExperimentResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}

  private:

    Aws::String m_experimentName;

    Aws::String m_experimentArn;

    Aws::String m_displayName;

    ExperimentSource m_source;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
