/**
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
    AWS_GLUE_API Crawl() = default;
    AWS_GLUE_API Crawl(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Crawl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the crawler.</p>
     */
    inline CrawlState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CrawlState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Crawl& WithState(CrawlState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    Crawl& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    Crawl& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message associated with the crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    Crawl& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const { return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    template<typename LogGroupT = Aws::String>
    void SetLogGroup(LogGroupT&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::forward<LogGroupT>(value); }
    template<typename LogGroupT = Aws::String>
    Crawl& WithLogGroup(LogGroupT&& value) { SetLogGroup(std::forward<LogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline const Aws::String& GetLogStream() const { return m_logStream; }
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
    template<typename LogStreamT = Aws::String>
    void SetLogStream(LogStreamT&& value) { m_logStreamHasBeenSet = true; m_logStream = std::forward<LogStreamT>(value); }
    template<typename LogStreamT = Aws::String>
    Crawl& WithLogStream(LogStreamT&& value) { SetLogStream(std::forward<LogStreamT>(value)); return *this;}
    ///@}
  private:

    CrawlState m_state{CrawlState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn{};
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
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
