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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CrawlState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The details of a crawl in the workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Crawl">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Crawl
  {
  public:
    Crawl();
    Crawl(Aws::Utils::Json::JsonView jsonValue);
    Crawl& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the crawler.</p>
     */
    inline const CrawlState& GetState() const{ return m_state; }

    /**
     * <p>The state of the crawler.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the crawler.</p>
     */
    inline void SetState(const CrawlState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the crawler.</p>
     */
    inline void SetState(CrawlState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the crawler.</p>
     */
    inline Crawl& WithState(const CrawlState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the crawler.</p>
     */
    inline Crawl& WithState(CrawlState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline Crawl& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline Crawl& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }

    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline Crawl& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline Crawl& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline Crawl& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline Crawl& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline Crawl& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline Crawl& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline Crawl& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline Crawl& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}


    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline const Aws::String& GetLogStream() const{ return m_logStream; }

    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }

    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline void SetLogStream(const Aws::String& value) { m_logStreamHasBeenSet = true; m_logStream = value; }

    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline void SetLogStream(Aws::String&& value) { m_logStreamHasBeenSet = true; m_logStream = std::move(value); }

    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline void SetLogStream(const char* value) { m_logStreamHasBeenSet = true; m_logStream.assign(value); }

    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline Crawl& WithLogStream(const Aws::String& value) { SetLogStream(value); return *this;}

    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline Crawl& WithLogStream(Aws::String&& value) { SetLogStream(std::move(value)); return *this;}

    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline Crawl& WithLogStream(const char* value) { SetLogStream(value); return *this;}

  private:

    CrawlState m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet;

    Aws::String m_logStream;
    bool m_logStreamHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
