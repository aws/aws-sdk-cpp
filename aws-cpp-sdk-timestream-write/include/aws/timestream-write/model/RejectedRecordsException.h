/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/RejectedRecord.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> WriteRecords would throw this exception in the following cases: </p> <ul>
   * <li> <p> Records with duplicate data where there are multiple records with the
   * same dimensions, timestamps, and measure names but different measure values.
   * </p> </li> <li> <p> Records with timestamps that lie outside the retention
   * duration of the memory store </p> </li> <li> <p> Records with dimensions or
   * measures that exceed the Timestream defined limits. </p> </li> </ul> <p> For
   * more information, see <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
   * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/RejectedRecordsException">AWS
   * API Reference</a></p>
   */
  class AWS_TIMESTREAMWRITE_API RejectedRecordsException
  {
  public:
    RejectedRecordsException();
    RejectedRecordsException(Aws::Utils::Json::JsonView jsonValue);
    RejectedRecordsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline RejectedRecordsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline RejectedRecordsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline RejectedRecordsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::Vector<RejectedRecord>& GetRejectedRecords() const{ return m_rejectedRecords; }

    
    inline bool RejectedRecordsHasBeenSet() const { return m_rejectedRecordsHasBeenSet; }

    
    inline void SetRejectedRecords(const Aws::Vector<RejectedRecord>& value) { m_rejectedRecordsHasBeenSet = true; m_rejectedRecords = value; }

    
    inline void SetRejectedRecords(Aws::Vector<RejectedRecord>&& value) { m_rejectedRecordsHasBeenSet = true; m_rejectedRecords = std::move(value); }

    
    inline RejectedRecordsException& WithRejectedRecords(const Aws::Vector<RejectedRecord>& value) { SetRejectedRecords(value); return *this;}

    
    inline RejectedRecordsException& WithRejectedRecords(Aws::Vector<RejectedRecord>&& value) { SetRejectedRecords(std::move(value)); return *this;}

    
    inline RejectedRecordsException& AddRejectedRecords(const RejectedRecord& value) { m_rejectedRecordsHasBeenSet = true; m_rejectedRecords.push_back(value); return *this; }

    
    inline RejectedRecordsException& AddRejectedRecords(RejectedRecord&& value) { m_rejectedRecordsHasBeenSet = true; m_rejectedRecords.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Vector<RejectedRecord> m_rejectedRecords;
    bool m_rejectedRecordsHasBeenSet;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
