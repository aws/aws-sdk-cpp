/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/AllowPublish.h>
#include <aws/codeartifact/model/AllowUpstream.h>
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
   * <p>Details about the origin restrictions set on the package. The package origin
   * restrictions determine how new versions of a package can be added to a specific
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageOriginRestrictions">AWS
   * API Reference</a></p>
   */
  class PackageOriginRestrictions
  {
  public:
    AWS_CODEARTIFACT_API PackageOriginRestrictions();
    AWS_CODEARTIFACT_API PackageOriginRestrictions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageOriginRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be published directly to the repository.</p>
     */
    inline const AllowPublish& GetPublish() const{ return m_publish; }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be published directly to the repository.</p>
     */
    inline bool PublishHasBeenSet() const { return m_publishHasBeenSet; }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be published directly to the repository.</p>
     */
    inline void SetPublish(const AllowPublish& value) { m_publishHasBeenSet = true; m_publish = value; }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be published directly to the repository.</p>
     */
    inline void SetPublish(AllowPublish&& value) { m_publishHasBeenSet = true; m_publish = std::move(value); }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be published directly to the repository.</p>
     */
    inline PackageOriginRestrictions& WithPublish(const AllowPublish& value) { SetPublish(value); return *this;}

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be published directly to the repository.</p>
     */
    inline PackageOriginRestrictions& WithPublish(AllowPublish&& value) { SetPublish(std::move(value)); return *this;}


    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be added to the repository from an external connection or upstream
     * source.</p>
     */
    inline const AllowUpstream& GetUpstream() const{ return m_upstream; }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be added to the repository from an external connection or upstream
     * source.</p>
     */
    inline bool UpstreamHasBeenSet() const { return m_upstreamHasBeenSet; }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be added to the repository from an external connection or upstream
     * source.</p>
     */
    inline void SetUpstream(const AllowUpstream& value) { m_upstreamHasBeenSet = true; m_upstream = value; }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be added to the repository from an external connection or upstream
     * source.</p>
     */
    inline void SetUpstream(AllowUpstream&& value) { m_upstreamHasBeenSet = true; m_upstream = std::move(value); }

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be added to the repository from an external connection or upstream
     * source.</p>
     */
    inline PackageOriginRestrictions& WithUpstream(const AllowUpstream& value) { SetUpstream(value); return *this;}

    /**
     * <p>The package origin configuration that determines if new versions of the
     * package can be added to the repository from an external connection or upstream
     * source.</p>
     */
    inline PackageOriginRestrictions& WithUpstream(AllowUpstream&& value) { SetUpstream(std::move(value)); return *this;}

  private:

    AllowPublish m_publish;
    bool m_publishHasBeenSet = false;

    AllowUpstream m_upstream;
    bool m_upstreamHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
