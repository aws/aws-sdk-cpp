/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/S3Location.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The analysis template artifact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisTemplateArtifact">AWS
   * API Reference</a></p>
   */
  class AnalysisTemplateArtifact
  {
  public:
    AWS_CLEANROOMS_API AnalysisTemplateArtifact();
    AWS_CLEANROOMS_API AnalysisTemplateArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The artifact location.</p>
     */
    inline const S3Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const S3Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(S3Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline AnalysisTemplateArtifact& WithLocation(const S3Location& value) { SetLocation(value); return *this;}
    inline AnalysisTemplateArtifact& WithLocation(S3Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}
  private:

    S3Location m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
