/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/SensitiveDataDetections.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains a detected instance of sensitive data that are based on built-in
   * identifiers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SensitiveDataResult">AWS
   * API Reference</a></p>
   */
  class SensitiveDataResult
  {
  public:
    AWS_SECURITYHUB_API SensitiveDataResult();
    AWS_SECURITYHUB_API SensitiveDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SensitiveDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline SensitiveDataResult& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline SensitiveDataResult& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline SensitiveDataResult& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline const Aws::Vector<SensitiveDataDetections>& GetDetections() const{ return m_detections; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline void SetDetections(const Aws::Vector<SensitiveDataDetections>& value) { m_detectionsHasBeenSet = true; m_detections = value; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline void SetDetections(Aws::Vector<SensitiveDataDetections>&& value) { m_detectionsHasBeenSet = true; m_detections = std::move(value); }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline SensitiveDataResult& WithDetections(const Aws::Vector<SensitiveDataDetections>& value) { SetDetections(value); return *this;}

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline SensitiveDataResult& WithDetections(Aws::Vector<SensitiveDataDetections>&& value) { SetDetections(std::move(value)); return *this;}

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline SensitiveDataResult& AddDetections(const SensitiveDataDetections& value) { m_detectionsHasBeenSet = true; m_detections.push_back(value); return *this; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline SensitiveDataResult& AddDetections(SensitiveDataDetections&& value) { m_detectionsHasBeenSet = true; m_detections.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline SensitiveDataResult& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<SensitiveDataDetections> m_detections;
    bool m_detectionsHasBeenSet = false;

    long long m_totalCount;
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
