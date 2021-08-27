/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>CVSS scores from the advisory related to the vulnerability.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Cvss">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Cvss
  {
  public:
    Cvss();
    Cvss(Aws::Utils::Json::JsonView jsonValue);
    Cvss& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline Cvss& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline Cvss& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline Cvss& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The base CVSS score.</p>
     */
    inline double GetBaseScore() const{ return m_baseScore; }

    /**
     * <p>The base CVSS score.</p>
     */
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }

    /**
     * <p>The base CVSS score.</p>
     */
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }

    /**
     * <p>The base CVSS score.</p>
     */
    inline Cvss& WithBaseScore(double value) { SetBaseScore(value); return *this;}


    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline const Aws::String& GetBaseVector() const{ return m_baseVector; }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline bool BaseVectorHasBeenSet() const { return m_baseVectorHasBeenSet; }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline void SetBaseVector(const Aws::String& value) { m_baseVectorHasBeenSet = true; m_baseVector = value; }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline void SetBaseVector(Aws::String&& value) { m_baseVectorHasBeenSet = true; m_baseVector = std::move(value); }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline void SetBaseVector(const char* value) { m_baseVectorHasBeenSet = true; m_baseVector.assign(value); }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline Cvss& WithBaseVector(const Aws::String& value) { SetBaseVector(value); return *this;}

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline Cvss& WithBaseVector(Aws::String&& value) { SetBaseVector(std::move(value)); return *this;}

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline Cvss& WithBaseVector(const char* value) { SetBaseVector(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet;

    double m_baseScore;
    bool m_baseScoreHasBeenSet;

    Aws::String m_baseVector;
    bool m_baseVectorHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
