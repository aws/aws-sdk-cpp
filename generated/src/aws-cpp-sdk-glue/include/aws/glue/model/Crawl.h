﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Crawl
  {
  public:
    AWS_GLUE_API Crawl();
    AWS_GLUE_API Crawl(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Crawl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the crawler.</p>
     */
    inline const CrawlState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CrawlState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CrawlState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Crawl& WithState(const CrawlState& value) { SetState(value); return *this;}
    inline Crawl& WithState(CrawlState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }
    inline Crawl& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline Crawl& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }
    inline Crawl& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline Crawl& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline Crawl& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline Crawl& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline Crawl& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }
    inline Crawl& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}
    inline Crawl& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}
    inline Crawl& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline const Aws::String& GetLogStream() const{ return m_logStream; }
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
    inline void SetLogStream(const Aws::String& value) { m_logStreamHasBeenSet = true; m_logStream = value; }
    inline void SetLogStream(Aws::String&& value) { m_logStreamHasBeenSet = true; m_logStream = std::move(value); }
    inline void SetLogStream(const char* value) { m_logStreamHasBeenSet = true; m_logStream.assign(value); }
    inline Crawl& WithLogStream(const Aws::String& value) { SetLogStream(value); return *this;}
    inline Crawl& WithLogStream(Aws::String&& value) { SetLogStream(std::move(value)); return *this;}
    inline Crawl& WithLogStream(const char* value) { SetLogStream(value); return *this;}
    ///@}
  private:

    CrawlState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;

    Aws::String m_logStream;
    bool m_logStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
