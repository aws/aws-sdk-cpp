/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The name of the data and how often it should be pulled from the
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class ScheduleConfiguration
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ScheduleConfiguration();
    AWS_APPINTEGRATIONSSERVICE_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline const Aws::String& GetFirstExecutionFrom() const{ return m_firstExecutionFrom; }

    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline bool FirstExecutionFromHasBeenSet() const { return m_firstExecutionFromHasBeenSet; }

    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline void SetFirstExecutionFrom(const Aws::String& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = value; }

    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline void SetFirstExecutionFrom(Aws::String&& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = std::move(value); }

    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline void SetFirstExecutionFrom(const char* value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom.assign(value); }

    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline ScheduleConfiguration& WithFirstExecutionFrom(const Aws::String& value) { SetFirstExecutionFrom(value); return *this;}

    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline ScheduleConfiguration& WithFirstExecutionFrom(Aws::String&& value) { SetFirstExecutionFrom(std::move(value)); return *this;}

    /**
     * <p>The start date for objects to import in the first flow run.</p>
     */
    inline ScheduleConfiguration& WithFirstExecutionFrom(const char* value) { SetFirstExecutionFrom(value); return *this;}


    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline ScheduleConfiguration& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline ScheduleConfiguration& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline ScheduleConfiguration& WithObject(const char* value) { SetObject(value); return *this;}


    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline ScheduleConfiguration& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline ScheduleConfiguration& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline ScheduleConfiguration& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

  private:

    Aws::String m_firstExecutionFrom;
    bool m_firstExecutionFromHasBeenSet = false;

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
