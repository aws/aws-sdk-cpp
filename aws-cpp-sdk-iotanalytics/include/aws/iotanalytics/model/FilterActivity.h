/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that filters a message based on its attributes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/FilterActivity">AWS
   * API Reference</a></p>
   */
  class FilterActivity
  {
  public:
    AWS_IOTANALYTICS_API FilterActivity();
    AWS_IOTANALYTICS_API FilterActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API FilterActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter activity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter activity.</p>
     */
    inline FilterActivity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter activity.</p>
     */
    inline FilterActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter activity.</p>
     */
    inline FilterActivity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }

    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline FilterActivity& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}

    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline FilterActivity& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>An expression that looks like a SQL WHERE clause that must return a Boolean
     * value. Messages that satisfy the condition are passed to the next activity. </p>
     */
    inline FilterActivity& WithFilter(const char* value) { SetFilter(value); return *this;}


    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next = value; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(const char* value) { m_nextHasBeenSet = true; m_next.assign(value); }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline FilterActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline FilterActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline FilterActivity& WithNext(const char* value) { SetNext(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
