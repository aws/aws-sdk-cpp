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
    AWS_ATHENA_API CalculationResult();
    AWS_ATHENA_API CalculationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CalculationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline const Aws::String& GetStdOutS3Uri() const{ return m_stdOutS3Uri; }

    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline bool StdOutS3UriHasBeenSet() const { return m_stdOutS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline void SetStdOutS3Uri(const Aws::String& value) { m_stdOutS3UriHasBeenSet = true; m_stdOutS3Uri = value; }

    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline void SetStdOutS3Uri(Aws::String&& value) { m_stdOutS3UriHasBeenSet = true; m_stdOutS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline void SetStdOutS3Uri(const char* value) { m_stdOutS3UriHasBeenSet = true; m_stdOutS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline CalculationResult& WithStdOutS3Uri(const Aws::String& value) { SetStdOutS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline CalculationResult& WithStdOutS3Uri(Aws::String&& value) { SetStdOutS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the <code>stdout</code> file for the
     * calculation.</p>
     */
    inline CalculationResult& WithStdOutS3Uri(const char* value) { SetStdOutS3Uri(value); return *this;}


    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline const Aws::String& GetStdErrorS3Uri() const{ return m_stdErrorS3Uri; }

    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline bool StdErrorS3UriHasBeenSet() const { return m_stdErrorS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline void SetStdErrorS3Uri(const Aws::String& value) { m_stdErrorS3UriHasBeenSet = true; m_stdErrorS3Uri = value; }

    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline void SetStdErrorS3Uri(Aws::String&& value) { m_stdErrorS3UriHasBeenSet = true; m_stdErrorS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline void SetStdErrorS3Uri(const char* value) { m_stdErrorS3UriHasBeenSet = true; m_stdErrorS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline CalculationResult& WithStdErrorS3Uri(const Aws::String& value) { SetStdErrorS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline CalculationResult& WithStdErrorS3Uri(Aws::String&& value) { SetStdErrorS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the <code>stderr</code> error messages file for the
     * calculation.</p>
     */
    inline CalculationResult& WithStdErrorS3Uri(const char* value) { SetStdErrorS3Uri(value); return *this;}


    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline const Aws::String& GetResultS3Uri() const{ return m_resultS3Uri; }

    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline bool ResultS3UriHasBeenSet() const { return m_resultS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline void SetResultS3Uri(const Aws::String& value) { m_resultS3UriHasBeenSet = true; m_resultS3Uri = value; }

    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline void SetResultS3Uri(Aws::String&& value) { m_resultS3UriHasBeenSet = true; m_resultS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline void SetResultS3Uri(const char* value) { m_resultS3UriHasBeenSet = true; m_resultS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline CalculationResult& WithResultS3Uri(const Aws::String& value) { SetResultS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline CalculationResult& WithResultS3Uri(Aws::String&& value) { SetResultS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the folder for the calculation results.</p>
     */
    inline CalculationResult& WithResultS3Uri(const char* value) { SetResultS3Uri(value); return *this;}


    /**
     * <p>The data format of the calculation result.</p>
     */
    inline const Aws::String& GetResultType() const{ return m_resultType; }

    /**
     * <p>The data format of the calculation result.</p>
     */
    inline bool ResultTypeHasBeenSet() const { return m_resultTypeHasBeenSet; }

    /**
     * <p>The data format of the calculation result.</p>
     */
    inline void SetResultType(const Aws::String& value) { m_resultTypeHasBeenSet = true; m_resultType = value; }

    /**
     * <p>The data format of the calculation result.</p>
     */
    inline void SetResultType(Aws::String&& value) { m_resultTypeHasBeenSet = true; m_resultType = std::move(value); }

    /**
     * <p>The data format of the calculation result.</p>
     */
    inline void SetResultType(const char* value) { m_resultTypeHasBeenSet = true; m_resultType.assign(value); }

    /**
     * <p>The data format of the calculation result.</p>
     */
    inline CalculationResult& WithResultType(const Aws::String& value) { SetResultType(value); return *this;}

    /**
     * <p>The data format of the calculation result.</p>
     */
    inline CalculationResult& WithResultType(Aws::String&& value) { SetResultType(std::move(value)); return *this;}

    /**
     * <p>The data format of the calculation result.</p>
     */
    inline CalculationResult& WithResultType(const char* value) { SetResultType(value); return *this;}

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
