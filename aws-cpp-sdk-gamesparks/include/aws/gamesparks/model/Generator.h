/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>Properties that specify the code generator for a generated code
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/Generator">AWS
   * API Reference</a></p>
   */
  class Generator
  {
  public:
    AWS_GAMESPARKS_API Generator();
    AWS_GAMESPARKS_API Generator(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Generator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline const Aws::String& GetGameSdkVersion() const{ return m_gameSdkVersion; }

    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline bool GameSdkVersionHasBeenSet() const { return m_gameSdkVersionHasBeenSet; }

    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline void SetGameSdkVersion(const Aws::String& value) { m_gameSdkVersionHasBeenSet = true; m_gameSdkVersion = value; }

    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline void SetGameSdkVersion(Aws::String&& value) { m_gameSdkVersionHasBeenSet = true; m_gameSdkVersion = std::move(value); }

    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline void SetGameSdkVersion(const char* value) { m_gameSdkVersionHasBeenSet = true; m_gameSdkVersion.assign(value); }

    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline Generator& WithGameSdkVersion(const Aws::String& value) { SetGameSdkVersion(value); return *this;}

    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline Generator& WithGameSdkVersion(Aws::String&& value) { SetGameSdkVersion(std::move(value)); return *this;}

    /**
     * <p>The target version of the GameSparks Game SDK.</p>
     */
    inline Generator& WithGameSdkVersion(const char* value) { SetGameSdkVersion(value); return *this;}


    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline Generator& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline Generator& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The programming language for the generated code.</p> <p> Not all languages
     * are supported for each platform. For cases where multiple languages are
     * supported, this parameter specifies the language to be used. If this value is
     * omitted, the default language for the target platform will be used. </p>
     */
    inline Generator& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline const Aws::String& GetTargetPlatform() const{ return m_targetPlatform; }

    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline bool TargetPlatformHasBeenSet() const { return m_targetPlatformHasBeenSet; }

    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline void SetTargetPlatform(const Aws::String& value) { m_targetPlatformHasBeenSet = true; m_targetPlatform = value; }

    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline void SetTargetPlatform(Aws::String&& value) { m_targetPlatformHasBeenSet = true; m_targetPlatform = std::move(value); }

    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline void SetTargetPlatform(const char* value) { m_targetPlatformHasBeenSet = true; m_targetPlatform.assign(value); }

    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline Generator& WithTargetPlatform(const Aws::String& value) { SetTargetPlatform(value); return *this;}

    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline Generator& WithTargetPlatform(Aws::String&& value) { SetTargetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform that will be used to run the generated code.</p>
     */
    inline Generator& WithTargetPlatform(const char* value) { SetTargetPlatform(value); return *this;}

  private:

    Aws::String m_gameSdkVersion;
    bool m_gameSdkVersionHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_targetPlatform;
    bool m_targetPlatformHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
