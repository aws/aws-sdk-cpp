/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/S3RepositoryDetails.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about an associated repository in an S3 bucket. The associated
   * repository contains a source code .zip file and a build artifacts .zip file that
   * contains .jar or .class files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/S3BucketRepository">AWS
   * API Reference</a></p>
   */
  class S3BucketRepository
  {
  public:
    AWS_CODEGURUREVIEWER_API S3BucketRepository() = default;
    AWS_CODEGURUREVIEWER_API S3BucketRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API S3BucketRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3BucketRepository& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>S3RepositoryDetails</code> object that specifies the name of an S3
     * bucket and a <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code>
     * object includes the S3 object keys for a source code .zip file and for a build
     * artifacts .zip file.</p>
     */
    inline const S3RepositoryDetails& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = S3RepositoryDetails>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = S3RepositoryDetails>
    S3BucketRepository& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3RepositoryDetails m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
