/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSessionStatus.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A <a>TestGridSession</a> is a single instance of a browser launched from the
   * URL provided by a call to <a>CreateTestGridUrl</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TestGridSession">AWS
   * API Reference</a></p>
   */
  class TestGridSession
  {
  public:
    AWS_DEVICEFARM_API TestGridSession();
    AWS_DEVICEFARM_API TestGridSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API TestGridSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the session.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the session.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the session.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the session.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the session.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the session.</p>
     */
    inline TestGridSession& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the session.</p>
     */
    inline TestGridSession& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the session.</p>
     */
    inline TestGridSession& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The state of the session.</p>
     */
    inline const TestGridSessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the session.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of the session.</p>
     */
    inline void SetStatus(const TestGridSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the session.</p>
     */
    inline void SetStatus(TestGridSessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of the session.</p>
     */
    inline TestGridSession& WithStatus(const TestGridSessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the session.</p>
     */
    inline TestGridSession& WithStatus(TestGridSessionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time that the session was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The time that the session was started.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The time that the session was started.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The time that the session was started.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The time that the session was started.</p>
     */
    inline TestGridSession& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The time that the session was started.</p>
     */
    inline TestGridSession& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The time the session ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEnded() const{ return m_ended; }

    /**
     * <p>The time the session ended.</p>
     */
    inline bool EndedHasBeenSet() const { return m_endedHasBeenSet; }

    /**
     * <p>The time the session ended.</p>
     */
    inline void SetEnded(const Aws::Utils::DateTime& value) { m_endedHasBeenSet = true; m_ended = value; }

    /**
     * <p>The time the session ended.</p>
     */
    inline void SetEnded(Aws::Utils::DateTime&& value) { m_endedHasBeenSet = true; m_ended = std::move(value); }

    /**
     * <p>The time the session ended.</p>
     */
    inline TestGridSession& WithEnded(const Aws::Utils::DateTime& value) { SetEnded(value); return *this;}

    /**
     * <p>The time the session ended.</p>
     */
    inline TestGridSession& WithEnded(Aws::Utils::DateTime&& value) { SetEnded(std::move(value)); return *this;}


    /**
     * <p>The number of billed minutes that were used for this session. </p>
     */
    inline double GetBillingMinutes() const{ return m_billingMinutes; }

    /**
     * <p>The number of billed minutes that were used for this session. </p>
     */
    inline bool BillingMinutesHasBeenSet() const { return m_billingMinutesHasBeenSet; }

    /**
     * <p>The number of billed minutes that were used for this session. </p>
     */
    inline void SetBillingMinutes(double value) { m_billingMinutesHasBeenSet = true; m_billingMinutes = value; }

    /**
     * <p>The number of billed minutes that were used for this session. </p>
     */
    inline TestGridSession& WithBillingMinutes(double value) { SetBillingMinutes(value); return *this;}


    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline const Aws::String& GetSeleniumProperties() const{ return m_seleniumProperties; }

    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline bool SeleniumPropertiesHasBeenSet() const { return m_seleniumPropertiesHasBeenSet; }

    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline void SetSeleniumProperties(const Aws::String& value) { m_seleniumPropertiesHasBeenSet = true; m_seleniumProperties = value; }

    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline void SetSeleniumProperties(Aws::String&& value) { m_seleniumPropertiesHasBeenSet = true; m_seleniumProperties = std::move(value); }

    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline void SetSeleniumProperties(const char* value) { m_seleniumPropertiesHasBeenSet = true; m_seleniumProperties.assign(value); }

    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline TestGridSession& WithSeleniumProperties(const Aws::String& value) { SetSeleniumProperties(value); return *this;}

    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline TestGridSession& WithSeleniumProperties(Aws::String&& value) { SetSeleniumProperties(std::move(value)); return *this;}

    /**
     * <p>A JSON object of options and parameters passed to the Selenium WebDriver.</p>
     */
    inline TestGridSession& WithSeleniumProperties(const char* value) { SetSeleniumProperties(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    TestGridSessionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_ended;
    bool m_endedHasBeenSet = false;

    double m_billingMinutes;
    bool m_billingMinutesHasBeenSet = false;

    Aws::String m_seleniumProperties;
    bool m_seleniumPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
