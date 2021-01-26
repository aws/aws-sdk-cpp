/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/VersionDifferences.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{
  class AWS_WELLARCHITECTED_API GetLensVersionDifferenceResult
  {
  public:
    GetLensVersionDifferenceResult();
    GetLensVersionDifferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLensVersionDifferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAlias.assign(value); }

    
    inline GetLensVersionDifferenceResult& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline GetLensVersionDifferenceResult& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline GetLensVersionDifferenceResult& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The base version of the lens.</p>
     */
    inline const Aws::String& GetBaseLensVersion() const{ return m_baseLensVersion; }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(const Aws::String& value) { m_baseLensVersion = value; }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(Aws::String&& value) { m_baseLensVersion = std::move(value); }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(const char* value) { m_baseLensVersion.assign(value); }

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithBaseLensVersion(const Aws::String& value) { SetBaseLensVersion(value); return *this;}

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithBaseLensVersion(Aws::String&& value) { SetBaseLensVersion(std::move(value)); return *this;}

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithBaseLensVersion(const char* value) { SetBaseLensVersion(value); return *this;}


    /**
     * <p>The latest version of the lens.</p>
     */
    inline const Aws::String& GetLatestLensVersion() const{ return m_latestLensVersion; }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(const Aws::String& value) { m_latestLensVersion = value; }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(Aws::String&& value) { m_latestLensVersion = std::move(value); }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(const char* value) { m_latestLensVersion.assign(value); }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLatestLensVersion(const Aws::String& value) { SetLatestLensVersion(value); return *this;}

    /**
     * <p>The latest version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLatestLensVersion(Aws::String&& value) { SetLatestLensVersion(std::move(value)); return *this;}

    /**
     * <p>The latest version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLatestLensVersion(const char* value) { SetLatestLensVersion(value); return *this;}


    
    inline const VersionDifferences& GetVersionDifferences() const{ return m_versionDifferences; }

    
    inline void SetVersionDifferences(const VersionDifferences& value) { m_versionDifferences = value; }

    
    inline void SetVersionDifferences(VersionDifferences&& value) { m_versionDifferences = std::move(value); }

    
    inline GetLensVersionDifferenceResult& WithVersionDifferences(const VersionDifferences& value) { SetVersionDifferences(value); return *this;}

    
    inline GetLensVersionDifferenceResult& WithVersionDifferences(VersionDifferences&& value) { SetVersionDifferences(std::move(value)); return *this;}

  private:

    Aws::String m_lensAlias;

    Aws::String m_baseLensVersion;

    Aws::String m_latestLensVersion;

    VersionDifferences m_versionDifferences;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
