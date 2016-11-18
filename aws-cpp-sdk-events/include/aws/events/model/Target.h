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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Targets are the resources that can be invoked when a rule is triggered. For
   * example, AWS Lambda functions, Amazon Kinesis streams, and built-in targets.</p>
   * <p><b>Input</b> and <b>InputPath</b> are mutually-exclusive and optional
   * parameters of a target. When a rule is triggered due to a matched event, if for
   * a target:</p> <ul> <li>Neither <b>Input</b> nor <b>InputPath</b> is specified,
   * then the entire event is passed to the target in JSON form.</li> <li>
   * <b>InputPath</b> is specified in the form of JSONPath (e.g. <b>$.detail</b>),
   * then only the part of the event specified in the path is passed to the target
   * (e.g. only the detail part of the event is passed). </li> <li> <b>Input</b> is
   * specified in the form of a valid JSON, then the matched event is overridden with
   * this constant.</li> </ul>
   */
  class AWS_CLOUDWATCHEVENTS_API Target
  {
  public:
    Target();
    Target(const Aws::Utils::Json::JsonValue& jsonValue);
    Target& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique target assignment ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique target assignment ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique target assignment ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique target assignment ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique target assignment ID.</p>
     */
    inline Target& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique target assignment ID.</p>
     */
    inline Target& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique target assignment ID.</p>
     */
    inline Target& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated of the target.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated of the target.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated of the target.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated of the target.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated of the target.</p>
     */
    inline Target& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated of the target.</p>
     */
    inline Target& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated of the target.</p>
     */
    inline Target& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>Valid JSON text passed to the target. For more information about JSON text,
     * see <a href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object
     * Notation (JSON) Data Interchange Format</a>.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>Valid JSON text passed to the target. For more information about JSON text,
     * see <a href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object
     * Notation (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Valid JSON text passed to the target. For more information about JSON text,
     * see <a href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object
     * Notation (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Valid JSON text passed to the target. For more information about JSON text,
     * see <a href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object
     * Notation (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>Valid JSON text passed to the target. For more information about JSON text,
     * see <a href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object
     * Notation (JSON) Data Interchange Format</a>.</p>
     */
    inline Target& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>Valid JSON text passed to the target. For more information about JSON text,
     * see <a href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object
     * Notation (JSON) Data Interchange Format</a>.</p>
     */
    inline Target& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>Valid JSON text passed to the target. For more information about JSON text,
     * see <a href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object
     * Notation (JSON) Data Interchange Format</a>.</p>
     */
    inline Target& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. For more information about JSON paths, see
     * <a href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. For more information about JSON paths, see
     * <a href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. For more information about JSON paths, see
     * <a href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. For more information about JSON paths, see
     * <a href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. For more information about JSON paths, see
     * <a href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline Target& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. For more information about JSON paths, see
     * <a href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline Target& WithInputPath(Aws::String&& value) { SetInputPath(value); return *this;}

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. For more information about JSON paths, see
     * <a href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline Target& WithInputPath(const char* value) { SetInputPath(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_input;
    bool m_inputHasBeenSet;
    Aws::String m_inputPath;
    bool m_inputPathHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
