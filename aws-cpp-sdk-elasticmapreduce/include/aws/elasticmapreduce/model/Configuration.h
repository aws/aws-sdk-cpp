/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elasticmapreduce/model/Configuration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>Specifies a hardware
   * and software configuration of the EMR cluster. This includes configurations for
   * applications and software bundled with Amazon EMR. The Configuration object is a
   * JSON object which is defined by a classification and a set of properties.
   * Configurations can be nested, so a configuration may have its own Configuration
   * objects listed.</p>
   */
  class AWS_EMR_API Configuration
  {
  public:
    Configuration();
    Configuration(const Aws::Utils::Json::JsonValue& jsonValue);
    Configuration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The classification of a configuration. For more information see, <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/API/EmrConfigurations.html">Amazon
     * EMR Configurations</a>. </p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>The classification of a configuration. For more information see, <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/API/EmrConfigurations.html">Amazon
     * EMR Configurations</a>. </p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>The classification of a configuration. For more information see, <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/API/EmrConfigurations.html">Amazon
     * EMR Configurations</a>. </p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>The classification of a configuration. For more information see, <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/API/EmrConfigurations.html">Amazon
     * EMR Configurations</a>. </p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>The classification of a configuration. For more information see, <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/API/EmrConfigurations.html">Amazon
     * EMR Configurations</a>. </p>
     */
    inline Configuration& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>The classification of a configuration. For more information see, <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/API/EmrConfigurations.html">Amazon
     * EMR Configurations</a>. </p>
     */
    inline Configuration& WithClassification(Aws::String&& value) { SetClassification(value); return *this;}

    /**
     * <p>The classification of a configuration. For more information see, <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/API/EmrConfigurations.html">Amazon
     * EMR Configurations</a>. </p>
     */
    inline Configuration& WithClassification(const char* value) { SetClassification(value); return *this;}

    /**
     * <p>A list of configurations you apply to this configuration object.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>A list of configurations you apply to this configuration object.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>A list of configurations you apply to this configuration object.</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>A list of configurations you apply to this configuration object.</p>
     */
    inline Configuration& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>A list of configurations you apply to this configuration object.</p>
     */
    inline Configuration& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(value); return *this;}

    /**
     * <p>A list of configurations you apply to this configuration object.</p>
     */
    inline Configuration& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>A list of configurations you apply to this configuration object.</p>
     */
    inline Configuration& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(value); return *this;}

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties[key] = value; return *this; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties[key] = value; return *this; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties[key] = value; return *this; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties[key] = value; return *this; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties[key] = value; return *this; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties[key] = value; return *this; }

    /**
     * <p>A set of properties supplied to the Configuration object.</p>
     */
    inline Configuration& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties[key] = value; return *this; }

  private:
    Aws::String m_classification;
    bool m_classificationHasBeenSet;
    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
