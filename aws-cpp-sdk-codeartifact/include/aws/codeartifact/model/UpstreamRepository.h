/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Information about an upstream repository. A list of
   * <code>UpstreamRepository</code> objects is an input parameter to <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_CreateRepository.html">
   * <code>CreateRepository</code> </a> and <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_UpdateRepository.html">
   * <code>UpdateRepository</code> </a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpstreamRepository">AWS
   * API Reference</a></p>
   */
  class AWS_CODEARTIFACT_API UpstreamRepository
  {
  public:
    UpstreamRepository();
    UpstreamRepository(Aws::Utils::Json::JsonView jsonValue);
    UpstreamRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of an upstream repository. </p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p> The name of an upstream repository. </p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p> The name of an upstream repository. </p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p> The name of an upstream repository. </p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p> The name of an upstream repository. </p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p> The name of an upstream repository. </p>
     */
    inline UpstreamRepository& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p> The name of an upstream repository. </p>
     */
    inline UpstreamRepository& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p> The name of an upstream repository. </p>
     */
    inline UpstreamRepository& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
