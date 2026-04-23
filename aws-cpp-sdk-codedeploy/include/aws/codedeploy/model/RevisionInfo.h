/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEDEPLOY_API RevisionInfo
  {
  public:
    RevisionInfo();
    RevisionInfo(Aws::Utils::Json::JsonView jsonValue);
    RevisionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_revisionLocationHasBeenSet;

    GenericRevisionInfo m_genericRevisionInfo;
    bool m_genericRevisionInfoHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
