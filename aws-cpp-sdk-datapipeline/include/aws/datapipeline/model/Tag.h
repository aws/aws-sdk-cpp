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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Tags are key/value pairs defined by a user and associated with a pipeline to
   * control access. AWS Data Pipeline allows you to associate ten tags per pipeline.
   * For more information, see <a
   * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
   * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/Tag">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key name of a tag defined by a user. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The optional value portion of a tag defined by a user. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
