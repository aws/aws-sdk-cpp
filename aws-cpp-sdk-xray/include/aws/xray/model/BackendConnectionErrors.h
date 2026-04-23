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
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/BackendConnectionErrors">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API BackendConnectionErrors
  {
  public:
    BackendConnectionErrors();
    BackendConnectionErrors(Aws::Utils::Json::JsonView jsonValue);
    BackendConnectionErrors& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline int GetTimeoutCount() const{ return m_timeoutCount; }

    /**
     * <p/>
     */
    inline bool TimeoutCountHasBeenSet() const { return m_timeoutCountHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTimeoutCount(int value) { m_timeoutCountHasBeenSet = true; m_timeoutCount = value; }

    /**
     * <p/>
     */
    inline BackendConnectionErrors& WithTimeoutCount(int value) { SetTimeoutCount(value); return *this;}


    /**
     * <p/>
     */
    inline int GetConnectionRefusedCount() const{ return m_connectionRefusedCount; }

    /**
     * <p/>
     */
    inline bool ConnectionRefusedCountHasBeenSet() const { return m_connectionRefusedCountHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetConnectionRefusedCount(int value) { m_connectionRefusedCountHasBeenSet = true; m_connectionRefusedCount = value; }

    /**
     * <p/>
     */
    inline BackendConnectionErrors& WithConnectionRefusedCount(int value) { SetConnectionRefusedCount(value); return *this;}


    /**
     * <p/>
     */
    inline int GetHTTPCode4XXCount() const{ return m_hTTPCode4XXCount; }

    /**
     * <p/>
     */
    inline bool HTTPCode4XXCountHasBeenSet() const { return m_hTTPCode4XXCountHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHTTPCode4XXCount(int value) { m_hTTPCode4XXCountHasBeenSet = true; m_hTTPCode4XXCount = value; }

    /**
     * <p/>
     */
    inline BackendConnectionErrors& WithHTTPCode4XXCount(int value) { SetHTTPCode4XXCount(value); return *this;}


    /**
     * <p/>
     */
    inline int GetHTTPCode5XXCount() const{ return m_hTTPCode5XXCount; }

    /**
     * <p/>
     */
    inline bool HTTPCode5XXCountHasBeenSet() const { return m_hTTPCode5XXCountHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHTTPCode5XXCount(int value) { m_hTTPCode5XXCountHasBeenSet = true; m_hTTPCode5XXCount = value; }

    /**
     * <p/>
     */
    inline BackendConnectionErrors& WithHTTPCode5XXCount(int value) { SetHTTPCode5XXCount(value); return *this;}


    /**
     * <p/>
     */
    inline int GetUnknownHostCount() const{ return m_unknownHostCount; }

    /**
     * <p/>
     */
    inline bool UnknownHostCountHasBeenSet() const { return m_unknownHostCountHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetUnknownHostCount(int value) { m_unknownHostCountHasBeenSet = true; m_unknownHostCount = value; }

    /**
     * <p/>
     */
    inline BackendConnectionErrors& WithUnknownHostCount(int value) { SetUnknownHostCount(value); return *this;}


    /**
     * <p/>
     */
    inline int GetOtherCount() const{ return m_otherCount; }

    /**
     * <p/>
     */
    inline bool OtherCountHasBeenSet() const { return m_otherCountHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetOtherCount(int value) { m_otherCountHasBeenSet = true; m_otherCount = value; }

    /**
     * <p/>
     */
    inline BackendConnectionErrors& WithOtherCount(int value) { SetOtherCount(value); return *this;}

  private:

    int m_timeoutCount;
    bool m_timeoutCountHasBeenSet;

    int m_connectionRefusedCount;
    bool m_connectionRefusedCountHasBeenSet;

    int m_hTTPCode4XXCount;
    bool m_hTTPCode4XXCountHasBeenSet;

    int m_hTTPCode5XXCount;
    bool m_hTTPCode5XXCountHasBeenSet;

    int m_unknownHostCount;
    bool m_unknownHostCountHasBeenSet;

    int m_otherCount;
    bool m_otherCountHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
