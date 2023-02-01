/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/QueryCompileErrorLocation.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Reserved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/QueryCompileError">AWS
   * API Reference</a></p>
   */
  class QueryCompileError
  {
  public:
    AWS_CLOUDWATCHLOGS_API QueryCompileError();
    AWS_CLOUDWATCHLOGS_API QueryCompileError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryCompileError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved.</p>
     */
    inline const QueryCompileErrorLocation& GetLocation() const{ return m_location; }

    /**
     * <p>Reserved.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetLocation(const QueryCompileErrorLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetLocation(QueryCompileErrorLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline QueryCompileError& WithLocation(const QueryCompileErrorLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline QueryCompileError& WithLocation(QueryCompileErrorLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Reserved.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline QueryCompileError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline QueryCompileError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline QueryCompileError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    QueryCompileErrorLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
