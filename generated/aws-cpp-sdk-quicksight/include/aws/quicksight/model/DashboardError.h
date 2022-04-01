﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardErrorType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dashboard error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardError">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DashboardError
  {
  public:
    DashboardError();
    DashboardError(Aws::Utils::Json::JsonView jsonValue);
    DashboardError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type.</p>
     */
    inline const DashboardErrorType& GetType() const{ return m_type; }

    /**
     * <p>Type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(const DashboardErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(DashboardErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type.</p>
     */
    inline DashboardError& WithType(const DashboardErrorType& value) { SetType(value); return *this;}

    /**
     * <p>Type.</p>
     */
    inline DashboardError& WithType(DashboardErrorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Message.</p>
     */
    inline DashboardError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Message.</p>
     */
    inline DashboardError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Message.</p>
     */
    inline DashboardError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    DashboardErrorType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
