/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/FlattenedElement.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This processor takes a list of objects that contain key fields, and converts
   * them into a map of target keys.</p> <p>For more information about this processor
   * including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-listToMap">
   * listToMap</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListToMap">AWS
   * API Reference</a></p>
   */
  class ListToMap
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListToMap();
    AWS_CLOUDWATCHLOGS_API ListToMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ListToMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key in the log event that has a list of objects that will be converted to
     * a map.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ListToMap& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ListToMap& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ListToMap& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key of the field to be extracted as keys in the generated map</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ListToMap& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ListToMap& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ListToMap& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this is specified, the values that you specify in this parameter will be
     * extracted from the <code>source</code> objects and put into the values of the
     * generated map. Otherwise, original objects in the source list will be put into
     * the values of the generated map.</p>
     */
    inline const Aws::String& GetValueKey() const{ return m_valueKey; }
    inline bool ValueKeyHasBeenSet() const { return m_valueKeyHasBeenSet; }
    inline void SetValueKey(const Aws::String& value) { m_valueKeyHasBeenSet = true; m_valueKey = value; }
    inline void SetValueKey(Aws::String&& value) { m_valueKeyHasBeenSet = true; m_valueKey = std::move(value); }
    inline void SetValueKey(const char* value) { m_valueKeyHasBeenSet = true; m_valueKey.assign(value); }
    inline ListToMap& WithValueKey(const Aws::String& value) { SetValueKey(value); return *this;}
    inline ListToMap& WithValueKey(Aws::String&& value) { SetValueKey(std::move(value)); return *this;}
    inline ListToMap& WithValueKey(const char* value) { SetValueKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key of the field that will hold the generated map </p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline ListToMap& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline ListToMap& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline ListToMap& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether the list will be flattened into single
     * items. Specify <code>true</code> to flatten the list. The default is
     * <code>false</code> </p>
     */
    inline bool GetFlatten() const{ return m_flatten; }
    inline bool FlattenHasBeenSet() const { return m_flattenHasBeenSet; }
    inline void SetFlatten(bool value) { m_flattenHasBeenSet = true; m_flatten = value; }
    inline ListToMap& WithFlatten(bool value) { SetFlatten(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set <code>flatten</code> to <code>true</code>, use
     * <code>flattenedElement</code> to specify which element, <code>first</code> or
     * <code>last</code>, to keep. </p> <p>You must specify this parameter if
     * <code>flatten</code> is <code>true</code> </p>
     */
    inline const FlattenedElement& GetFlattenedElement() const{ return m_flattenedElement; }
    inline bool FlattenedElementHasBeenSet() const { return m_flattenedElementHasBeenSet; }
    inline void SetFlattenedElement(const FlattenedElement& value) { m_flattenedElementHasBeenSet = true; m_flattenedElement = value; }
    inline void SetFlattenedElement(FlattenedElement&& value) { m_flattenedElementHasBeenSet = true; m_flattenedElement = std::move(value); }
    inline ListToMap& WithFlattenedElement(const FlattenedElement& value) { SetFlattenedElement(value); return *this;}
    inline ListToMap& WithFlattenedElement(FlattenedElement&& value) { SetFlattenedElement(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_valueKey;
    bool m_valueKeyHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    bool m_flatten;
    bool m_flattenHasBeenSet = false;

    FlattenedElement m_flattenedElement;
    bool m_flattenedElementHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
