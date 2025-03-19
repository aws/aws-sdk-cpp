/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains information about an application-specific calculation
   * result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CalculationResult">AWS
   * API Reference</a></p>
   */
  class CalculationResult
  {
  public:
    AWS_ATHENA_API CalculationResult() = default;
    AWS_ATHENA_API CalculationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CalculationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline const Aws::String& GetStdOutS3Uri() const { return m_stdOutS3Uri; }
    inline bool StdOutS3UriHasBeenSet() const { return m_stdOutS3UriHasBeenSet; }
    template<typename StdOutS3UriT = Aws::String>
    void SetStdOutS3Uri(StdOutS3UriT&& value) { m_stdOutS3UriHasBeenSet = true; m_stdOutS3Uri = std::forward<StdOutS3UriT>(value); }
    template<typename StdOutS3UriT = Aws::String>
    CalculationResult& WithStdOutS3Uri(StdOutS3UriT&& value) { SetStdOutS3Uri(std::forward<StdOutS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline const Aws::String& GetStdErrorS3Uri() const { return m_stdErrorS3Uri; }
    inline bool StdErrorS3UriHasBeenSet() const { return m_stdErrorS3UriHasBeenSet; }
    template<typename StdErrorS3UriT = Aws::String>
    void SetStdErrorS3Uri(StdErrorS3UriT&& value) { m_stdErrorS3UriHasBeenSet = true; m_stdErrorS3Uri = std::forward<StdErrorS3UriT>(value); }
    template<typename StdErrorS3UriT = Aws::String>
    CalculationResult& WithStdErrorS3Uri(StdErrorS3UriT&& value) { SetStdErrorS3Uri(std::forward<StdErrorS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline const Aws::String& GetResultS3Uri() const { return m_resultS3Uri; }
    inline bool ResultS3UriHasBeenSet() const { return m_resultS3UriHasBeenSet; }
    template<typename ResultS3UriT = Aws::String>
    void SetResultS3Uri(ResultS3UriT&& value) { m_resultS3UriHasBeenSet = true; m_resultS3Uri = std::forward<ResultS3UriT>(value); }
    template<typename ResultS3UriT = Aws::String>
    CalculationResult& WithResultS3Uri(ResultS3UriT&& value) { SetResultS3Uri(std::forward<ResultS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the calculation result.</p>
     */
    inline const Aws::String& GetResultType() const { return m_resultType; }
    inline bool ResultTypeHasBeenSet() const { return m_resultTypeHasBeenSet; }
    template<typename ResultTypeT = Aws::String>
    void SetResultType(ResultTypeT&& value) { m_resultTypeHasBeenSet = true; m_resultType = std::forward<ResultTypeT>(value); }
    template<typename ResultTypeT = Aws::String>
    CalculationResult& WithResultType(ResultTypeT&& value) { SetResultType(std::forward<ResultTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stdOutS3Uri;
    bool m_stdOutS3UriHasBeenSet = false;

    Aws::String m_stdErrorS3Uri;
    bool m_stdErrorS3UriHasBeenSet = false;

    Aws::String m_resultS3Uri;
    bool m_resultS3UriHasBeenSet = false;

    Aws::String m_resultType;
    bool m_resultTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
