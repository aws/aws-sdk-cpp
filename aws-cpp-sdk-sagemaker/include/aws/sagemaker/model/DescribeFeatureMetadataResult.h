/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FeatureType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/FeatureParameter.h>
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
  class DescribeFeatureMetadataResult
  {
  public:
    AWS_SAGEMAKER_API DescribeFeatureMetadataResult();
    AWS_SAGEMAKER_API DescribeFeatureMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeFeatureMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that contains the
     * feature.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const{ return m_featureGroupArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that contains the
     * feature.</p>
     */
    inline void SetFeatureGroupArn(const Aws::String& value) { m_featureGroupArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that contains the
     * feature.</p>
     */
    inline void SetFeatureGroupArn(Aws::String&& value) { m_featureGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that contains the
     * feature.</p>
     */
    inline void SetFeatureGroupArn(const char* value) { m_featureGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that contains the
     * feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureGroupArn(const Aws::String& value) { SetFeatureGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that contains the
     * feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureGroupArn(Aws::String&& value) { SetFeatureGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that contains the
     * feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureGroupArn(const char* value) { SetFeatureGroupArn(value); return *this;}


    /**
     * <p>The name of the feature group that you've specified.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the feature group that you've specified.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupName = value; }

    /**
     * <p>The name of the feature group that you've specified.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the feature group that you've specified.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupName.assign(value); }

    /**
     * <p>The name of the feature group that you've specified.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the feature group that you've specified.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature group that you've specified.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The name of the feature that you've specified.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }

    /**
     * <p>The name of the feature that you've specified.</p>
     */
    inline void SetFeatureName(const Aws::String& value) { m_featureName = value; }

    /**
     * <p>The name of the feature that you've specified.</p>
     */
    inline void SetFeatureName(Aws::String&& value) { m_featureName = std::move(value); }

    /**
     * <p>The name of the feature that you've specified.</p>
     */
    inline void SetFeatureName(const char* value) { m_featureName.assign(value); }

    /**
     * <p>The name of the feature that you've specified.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}

    /**
     * <p>The name of the feature that you've specified.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature that you've specified.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}


    /**
     * <p>The data type of the feature.</p>
     */
    inline const FeatureType& GetFeatureType() const{ return m_featureType; }

    /**
     * <p>The data type of the feature.</p>
     */
    inline void SetFeatureType(const FeatureType& value) { m_featureType = value; }

    /**
     * <p>The data type of the feature.</p>
     */
    inline void SetFeatureType(FeatureType&& value) { m_featureType = std::move(value); }

    /**
     * <p>The data type of the feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureType(const FeatureType& value) { SetFeatureType(value); return *this;}

    /**
     * <p>The data type of the feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithFeatureType(FeatureType&& value) { SetFeatureType(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating when the feature was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp indicating when the feature was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp indicating when the feature was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp indicating when the feature was created.</p>
     */
    inline DescribeFeatureMetadataResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp indicating when the feature was created.</p>
     */
    inline DescribeFeatureMetadataResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating when the metadata for the feature group was modified.
     * For example, if you add a parameter describing the feature, the timestamp
     * changes to reflect the last time you </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp indicating when the metadata for the feature group was modified.
     * For example, if you add a parameter describing the feature, the timestamp
     * changes to reflect the last time you </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A timestamp indicating when the metadata for the feature group was modified.
     * For example, if you add a parameter describing the feature, the timestamp
     * changes to reflect the last time you </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp indicating when the metadata for the feature group was modified.
     * For example, if you add a parameter describing the feature, the timestamp
     * changes to reflect the last time you </p>
     */
    inline DescribeFeatureMetadataResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp indicating when the metadata for the feature group was modified.
     * For example, if you add a parameter describing the feature, the timestamp
     * changes to reflect the last time you </p>
     */
    inline DescribeFeatureMetadataResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The description you added to describe the feature.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description you added to describe the feature.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description you added to describe the feature.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description you added to describe the feature.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description you added to describe the feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description you added to describe the feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description you added to describe the feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The key-value pairs that you added to describe the feature.</p>
     */
    inline const Aws::Vector<FeatureParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The key-value pairs that you added to describe the feature.</p>
     */
    inline void SetParameters(const Aws::Vector<FeatureParameter>& value) { m_parameters = value; }

    /**
     * <p>The key-value pairs that you added to describe the feature.</p>
     */
    inline void SetParameters(Aws::Vector<FeatureParameter>&& value) { m_parameters = std::move(value); }

    /**
     * <p>The key-value pairs that you added to describe the feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithParameters(const Aws::Vector<FeatureParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The key-value pairs that you added to describe the feature.</p>
     */
    inline DescribeFeatureMetadataResult& WithParameters(Aws::Vector<FeatureParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs that you added to describe the feature.</p>
     */
    inline DescribeFeatureMetadataResult& AddParameters(const FeatureParameter& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>The key-value pairs that you added to describe the feature.</p>
     */
    inline DescribeFeatureMetadataResult& AddParameters(FeatureParameter&& value) { m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_featureGroupArn;

    Aws::String m_featureGroupName;

    Aws::String m_featureName;

    FeatureType m_featureType;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_description;

    Aws::Vector<FeatureParameter> m_parameters;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
