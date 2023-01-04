/**
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
  class DocumentRequires
  {
  public:
    AWS_SSM_API DocumentRequires();
    AWS_SSM_API DocumentRequires(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentRequires& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline const Aws::String& GetRequireType() const{ return m_requireType; }

    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline bool RequireTypeHasBeenSet() const { return m_requireTypeHasBeenSet; }

    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline void SetRequireType(const Aws::String& value) { m_requireTypeHasBeenSet = true; m_requireType = value; }

    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline void SetRequireType(Aws::String&& value) { m_requireTypeHasBeenSet = true; m_requireType = std::move(value); }

    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline void SetRequireType(const char* value) { m_requireTypeHasBeenSet = true; m_requireType.assign(value); }

    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline DocumentRequires& WithRequireType(const Aws::String& value) { SetRequireType(value); return *this;}

    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline DocumentRequires& WithRequireType(Aws::String&& value) { SetRequireType(std::move(value)); return *this;}

    /**
     * <p>The document type of the required SSM document.</p>
     */
    inline DocumentRequires& WithRequireType(const char* value) { SetRequireType(value); return *this;}


    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline DocumentRequires& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline DocumentRequires& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and can't be changed.</p>
     */
    inline DocumentRequires& WithVersionName(const char* value) { SetVersionName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_requireType;
    bool m_requireTypeHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
