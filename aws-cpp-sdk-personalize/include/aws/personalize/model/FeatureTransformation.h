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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides feature transformation information. Feature transformation is the
   * process of modifying raw input data into a form more suitable for model
   * training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/FeatureTransformation">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API FeatureTransformation
  {
  public:
    FeatureTransformation();
    FeatureTransformation(Aws::Utils::Json::JsonView jsonValue);
    FeatureTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the feature transformation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature transformation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature transformation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature transformation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature transformation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the feature transformation.</p>
     */
    inline FeatureTransformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature transformation.</p>
     */
    inline FeatureTransformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature transformation.</p>
     */
    inline FeatureTransformation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline const Aws::String& GetFeatureTransformationArn() const{ return m_featureTransformationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline bool FeatureTransformationArnHasBeenSet() const { return m_featureTransformationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline void SetFeatureTransformationArn(const Aws::String& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline void SetFeatureTransformationArn(Aws::String&& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline void SetFeatureTransformationArn(const char* value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline FeatureTransformation& WithFeatureTransformationArn(const Aws::String& value) { SetFeatureTransformationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline FeatureTransformation& WithFeatureTransformationArn(Aws::String&& value) { SetFeatureTransformationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline FeatureTransformation& WithFeatureTransformationArn(const char* value) { SetFeatureTransformationArn(value); return *this;}


    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultParameters() const{ return m_defaultParameters; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline bool DefaultParametersHasBeenSet() const { return m_defaultParametersHasBeenSet; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline void SetDefaultParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters = value; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline void SetDefaultParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters = std::move(value); }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& WithDefaultParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultParameters(value); return *this;}

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& WithDefaultParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultParameters(std::move(value)); return *this;}

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& AddDefaultParameters(const Aws::String& key, const Aws::String& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, value); return *this; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& AddDefaultParameters(Aws::String&& key, const Aws::String& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& AddDefaultParameters(const Aws::String& key, Aws::String&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& AddDefaultParameters(Aws::String&& key, Aws::String&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& AddDefaultParameters(const char* key, Aws::String&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& AddDefaultParameters(Aws::String&& key, const char* value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline FeatureTransformation& AddDefaultParameters(const char* key, const char* value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, value); return *this; }


    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline FeatureTransformation& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline FeatureTransformation& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline FeatureTransformation& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline FeatureTransformation& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline FeatureTransformation& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline FeatureTransformation& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline FeatureTransformation& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_featureTransformationArn;
    bool m_featureTransformationArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_defaultParameters;
    bool m_defaultParametersHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
