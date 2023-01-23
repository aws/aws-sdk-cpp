/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ScanStatusReason.h>
#include <aws/inspector2/model/ScanStatusCode.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The status of the scan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ScanStatus">AWS
   * API Reference</a></p>
   */
  class ScanStatus
  {
  public:
    AWS_INSPECTOR2_API ScanStatus();
    AWS_INSPECTOR2_API ScanStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ScanStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason for the scan.</p>
     */
    inline const ScanStatusReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the scan.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the scan.</p>
     */
    inline void SetReason(const ScanStatusReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the scan.</p>
     */
    inline void SetReason(ScanStatusReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the scan.</p>
     */
    inline ScanStatus& WithReason(const ScanStatusReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the scan.</p>
     */
    inline ScanStatus& WithReason(ScanStatusReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>The status code of the scan.</p>
     */
    inline const ScanStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code of the scan.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code of the scan.</p>
     */
    inline void SetStatusCode(const ScanStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code of the scan.</p>
     */
    inline void SetStatusCode(ScanStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code of the scan.</p>
     */
    inline ScanStatus& WithStatusCode(const ScanStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code of the scan.</p>
     */
    inline ScanStatus& WithStatusCode(ScanStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}

  private:

    ScanStatusReason m_reason;
    bool m_reasonHasBeenSet = false;

    ScanStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
