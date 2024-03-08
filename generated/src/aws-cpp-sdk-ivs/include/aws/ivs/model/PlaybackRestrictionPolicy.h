/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>An object representing a policy to constrain playback by country and/or
   * origin sites.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/PlaybackRestrictionPolicy">AWS
   * API Reference</a></p>
   */
  class PlaybackRestrictionPolicy
  {
  public:
    AWS_IVS_API PlaybackRestrictionPolicy();
    AWS_IVS_API PlaybackRestrictionPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API PlaybackRestrictionPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedCountries() const{ return m_allowedCountries; }

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline bool AllowedCountriesHasBeenSet() const { return m_allowedCountriesHasBeenSet; }

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline void SetAllowedCountries(const Aws::Vector<Aws::String>& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries = value; }

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline void SetAllowedCountries(Aws::Vector<Aws::String>&& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries = std::move(value); }

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& WithAllowedCountries(const Aws::Vector<Aws::String>& value) { SetAllowedCountries(value); return *this;}

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& WithAllowedCountries(Aws::Vector<Aws::String>&& value) { SetAllowedCountries(std::move(value)); return *this;}

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& AddAllowedCountries(const Aws::String& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.push_back(value); return *this; }

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& AddAllowedCountries(Aws::String&& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& AddAllowedCountries(const char* value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.push_back(value); return *this; }


    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOrigins() const{ return m_allowedOrigins; }

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline bool AllowedOriginsHasBeenSet() const { return m_allowedOriginsHasBeenSet; }

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline void SetAllowedOrigins(const Aws::Vector<Aws::String>& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = value; }

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline void SetAllowedOrigins(Aws::Vector<Aws::String>&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = std::move(value); }

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& WithAllowedOrigins(const Aws::Vector<Aws::String>& value) { SetAllowedOrigins(value); return *this;}

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& WithAllowedOrigins(Aws::Vector<Aws::String>&& value) { SetAllowedOrigins(std::move(value)); return *this;}

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& AddAllowedOrigins(const Aws::String& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(value); return *this; }

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& AddAllowedOrigins(Aws::String&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline PlaybackRestrictionPolicy& AddAllowedOrigins(const char* value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(value); return *this; }


    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline PlaybackRestrictionPolicy& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline PlaybackRestrictionPolicy& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Playback-restriction-policy ARN</p>
     */
    inline PlaybackRestrictionPolicy& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Whether channel playback is constrained by origin site. Default:
     * <code>false</code>.</p>
     */
    inline bool GetEnableStrictOriginEnforcement() const{ return m_enableStrictOriginEnforcement; }

    /**
     * <p>Whether channel playback is constrained by origin site. Default:
     * <code>false</code>.</p>
     */
    inline bool EnableStrictOriginEnforcementHasBeenSet() const { return m_enableStrictOriginEnforcementHasBeenSet; }

    /**
     * <p>Whether channel playback is constrained by origin site. Default:
     * <code>false</code>.</p>
     */
    inline void SetEnableStrictOriginEnforcement(bool value) { m_enableStrictOriginEnforcementHasBeenSet = true; m_enableStrictOriginEnforcement = value; }

    /**
     * <p>Whether channel playback is constrained by origin site. Default:
     * <code>false</code>.</p>
     */
    inline PlaybackRestrictionPolicy& WithEnableStrictOriginEnforcement(bool value) { SetEnableStrictOriginEnforcement(value); return *this;}


    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline PlaybackRestrictionPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline PlaybackRestrictionPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline PlaybackRestrictionPolicy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline PlaybackRestrictionPolicy& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_allowedCountries;
    bool m_allowedCountriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedOrigins;
    bool m_allowedOriginsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_enableStrictOriginEnforcement;
    bool m_enableStrictOriginEnforcementHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
