/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The returned release label application names or versions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SimplifiedApplication">AWS
   * API Reference</a></p>
   */
  class SimplifiedApplication
  {
  public:
    AWS_EMR_API SimplifiedApplication();
    AWS_EMR_API SimplifiedApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SimplifiedApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline SimplifiedApplication& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline SimplifiedApplication& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The returned release label application name. For example,
     * <code>hadoop</code>.</p>
     */
    inline SimplifiedApplication& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline SimplifiedApplication& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline SimplifiedApplication& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The returned release label application version. For example,
     * <code>3.2.1</code>.</p>
     */
    inline SimplifiedApplication& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
