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
   * <p>A key/value pair containing user-defined metadata that you can associate with
   * an Amazon EMR resource. Tags make it easier to associate clusters in various
   * ways, such as grouping clu\ sters to track your Amazon EMR resource allocation
   * costs. For more information, see <a
   * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
   * Amazon EMR Resources</a>. </p>
   */
  class AWS_EMR_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Json::JsonValue& jsonValue);
    Tag& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A user-defined key, which is the minimum required information for a valid
     * tag. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A user-defined key, which is the minimum required information for a valid
     * tag. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A user-defined key, which is the minimum required information for a valid
     * tag. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A user-defined key, which is the minimum required information for a valid
     * tag. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A user-defined key, which is the minimum required information for a valid
     * tag. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A user-defined key, which is the minimum required information for a valid
     * tag. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p>A user-defined key, which is the minimum required information for a valid
     * tag. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>A user-defined value, which is optional in a tag. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A user-defined value, which is optional in a tag. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A user-defined value, which is optional in a tag. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A user-defined value, which is optional in a tag. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A user-defined value, which is optional in a tag. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A user-defined value, which is optional in a tag. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>A user-defined value, which is optional in a tag. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging
     * Amazon EMR Resources</a>. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
