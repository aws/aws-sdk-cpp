/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/GenericRevisionInfo.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an application revision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RevisionInfo">AWS
   * API Reference</a></p>
   */
  class RevisionInfo
  {
  public:
    AWS_CODEDEPLOY_API RevisionInfo();
    AWS_CODEDEPLOY_API RevisionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API RevisionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the location and type of an application revision.</p>
     */
    inline const RevisionLocation& GetRevisionLocation() const{ return m_revisionLocation; }

    /**
     * <p>Information about the location and type of an application revision.</p>
     */
    inline bool RevisionLocationHasBeenSet() const { return m_revisionLocationHasBeenSet; }

    /**
     * <p>Information about the location and type of an application revision.</p>
     */
    inline void SetRevisionLocation(const RevisionLocation& value) { m_revisionLocationHasBeenSet = true; m_revisionLocation = value; }

    /**
     * <p>Information about the location and type of an application revision.</p>
     */
    inline void SetRevisionLocation(RevisionLocation&& value) { m_revisionLocationHasBeenSet = true; m_revisionLocation = std::move(value); }

    /**
     * <p>Information about the location and type of an application revision.</p>
     */
    inline RevisionInfo& WithRevisionLocation(const RevisionLocation& value) { SetRevisionLocation(value); return *this;}

    /**
     * <p>Information about the location and type of an application revision.</p>
     */
    inline RevisionInfo& WithRevisionLocation(RevisionLocation&& value) { SetRevisionLocation(std::move(value)); return *this;}


    /**
     * <p>Information about an application revision, including usage details and
     * associated deployment groups.</p>
     */
    inline const GenericRevisionInfo& GetGenericRevisionInfo() const{ return m_genericRevisionInfo; }

    /**
     * <p>Information about an application revision, including usage details and
     * associated deployment groups.</p>
     */
    inline bool GenericRevisionInfoHasBeenSet() const { return m_genericRevisionInfoHasBeenSet; }

    /**
     * <p>Information about an application revision, including usage details and
     * associated deployment groups.</p>
     */
    inline void SetGenericRevisionInfo(const GenericRevisionInfo& value) { m_genericRevisionInfoHasBeenSet = true; m_genericRevisionInfo = value; }

    /**
     * <p>Information about an application revision, including usage details and
     * associated deployment groups.</p>
     */
    inline void SetGenericRevisionInfo(GenericRevisionInfo&& value) { m_genericRevisionInfoHasBeenSet = true; m_genericRevisionInfo = std::move(value); }

    /**
     * <p>Information about an application revision, including usage details and
     * associated deployment groups.</p>
     */
    inline RevisionInfo& WithGenericRevisionInfo(const GenericRevisionInfo& value) { SetGenericRevisionInfo(value); return *this;}

    /**
     * <p>Information about an application revision, including usage details and
     * associated deployment groups.</p>
     */
    inline RevisionInfo& WithGenericRevisionInfo(GenericRevisionInfo&& value) { SetGenericRevisionInfo(std::move(value)); return *this;}

  private:

    RevisionLocation m_revisionLocation;
    bool m_revisionLocationHasBeenSet = false;

    GenericRevisionInfo m_genericRevisionInfo;
    bool m_genericRevisionInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
