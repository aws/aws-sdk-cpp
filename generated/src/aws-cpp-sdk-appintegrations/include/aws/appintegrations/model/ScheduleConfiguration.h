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


    ///@{
    /**
     * <p>The start date for objects to import in the first flow run as an Unix/epoch
     * timestamp in milliseconds or in ISO-8601 format.</p>
     */
    inline const Aws::String& GetFirstExecutionFrom() const{ return m_firstExecutionFrom; }
    inline bool FirstExecutionFromHasBeenSet() const { return m_firstExecutionFromHasBeenSet; }
    inline void SetFirstExecutionFrom(const Aws::String& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = value; }
    inline void SetFirstExecutionFrom(Aws::String&& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = std::move(value); }
    inline void SetFirstExecutionFrom(const char* value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom.assign(value); }
    inline ScheduleConfiguration& WithFirstExecutionFrom(const Aws::String& value) { SetFirstExecutionFrom(value); return *this;}
    inline ScheduleConfiguration& WithFirstExecutionFrom(Aws::String&& value) { SetFirstExecutionFrom(std::move(value)); return *this;}
    inline ScheduleConfiguration& WithFirstExecutionFrom(const char* value) { SetFirstExecutionFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }
    inline ScheduleConfiguration& WithObject(const Aws::String& value) { SetObject(value); return *this;}
    inline ScheduleConfiguration& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}
    inline ScheduleConfiguration& WithObject(const char* value) { SetObject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }
    inline ScheduleConfiguration& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline ScheduleConfiguration& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline ScheduleConfiguration& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
    ///@}
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
