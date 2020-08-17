/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AnalysisErrorType.h>
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
   * <p>A metadata error structure for an analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnalysisError">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API AnalysisError
  {
  public:
    AnalysisError();
    AnalysisError(Aws::Utils::Json::JsonView jsonValue);
    AnalysisError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the analysis error.</p>
     */
    inline const AnalysisErrorType& GetType() const{ return m_type; }

    /**
     * <p>The type of the analysis error.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the analysis error.</p>
     */
    inline void SetType(const AnalysisErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the analysis error.</p>
     */
    inline void SetType(AnalysisErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the analysis error.</p>
     */
    inline AnalysisError& WithType(const AnalysisErrorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the analysis error.</p>
     */
    inline AnalysisError& WithType(AnalysisErrorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline AnalysisError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline AnalysisError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the analysis error.</p>
     */
    inline AnalysisError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    AnalysisErrorType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
