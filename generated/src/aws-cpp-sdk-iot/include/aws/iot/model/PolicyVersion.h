/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a policy version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PolicyVersion">AWS
   * API Reference</a></p>
   */
  class PolicyVersion
  {
  public:
    AWS_IOT_API PolicyVersion();
    AWS_IOT_API PolicyVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PolicyVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The policy version ID.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The policy version ID.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The policy version ID.</p>
     */
    inline PolicyVersion& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline PolicyVersion& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline PolicyVersion& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline bool IsDefaultVersionHasBeenSet() const { return m_isDefaultVersionHasBeenSet; }

    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }

    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline PolicyVersion& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}


    /**
     * <p>The date and time the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline PolicyVersion& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time the policy was created.</p>
     */
    inline PolicyVersion& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}

  private:

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    bool m_isDefaultVersion;
    bool m_isDefaultVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
