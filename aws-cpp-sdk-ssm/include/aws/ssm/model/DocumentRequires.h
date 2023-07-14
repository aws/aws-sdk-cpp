﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An SSM document required by the current document.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentRequires">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API DocumentRequires
  {
  public:
    DocumentRequires();
    DocumentRequires(Aws::Utils::Json::JsonView jsonValue);
    DocumentRequires& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline DocumentRequires& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline DocumentRequires& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the required SSM document. The name can be an Amazon Resource
     * Name (ARN).</p>
     */
    inline DocumentRequires& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The document version required by the current document.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The document version required by the current document.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The document version required by the current document.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The document version required by the current document.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The document version required by the current document.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The document version required by the current document.</p>
     */
    inline DocumentRequires& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The document version required by the current document.</p>
     */
    inline DocumentRequires& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The document version required by the current document.</p>
     */
    inline DocumentRequires& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
