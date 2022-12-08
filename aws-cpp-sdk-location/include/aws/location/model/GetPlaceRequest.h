/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LocationService
{
namespace Model
{

  /**
   */
  class GetPlaceRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetPlaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPlace"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline GetPlaceRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline GetPlaceRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the place index resource that you want to use for the search.</p>
     */
    inline GetPlaceRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline GetPlaceRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline GetPlaceRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for a location around Athens, Greece, with the <code>language</code> parameter
     * set to <code>en</code>. The <code>city</code> in the results will most likely be
     * returned as <code>Athens</code>.</p> <p>If you set the <code>language</code>
     * parameter to <code>el</code>, for Greek, then the <code>city</code> in the
     * results will more likely be returned as <code>Αθήνα</code>.</p> <p>If the data
     * provider does not have a value for Greek, the result will be in a language that
     * the provider does support.</p>
     */
    inline GetPlaceRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The identifier of the place to find.</p>
     */
    inline const Aws::String& GetPlaceId() const{ return m_placeId; }

    /**
     * <p>The identifier of the place to find.</p>
     */
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }

    /**
     * <p>The identifier of the place to find.</p>
     */
    inline void SetPlaceId(const Aws::String& value) { m_placeIdHasBeenSet = true; m_placeId = value; }

    /**
     * <p>The identifier of the place to find.</p>
     */
    inline void SetPlaceId(Aws::String&& value) { m_placeIdHasBeenSet = true; m_placeId = std::move(value); }

    /**
     * <p>The identifier of the place to find.</p>
     */
    inline void SetPlaceId(const char* value) { m_placeIdHasBeenSet = true; m_placeId.assign(value); }

    /**
     * <p>The identifier of the place to find.</p>
     */
    inline GetPlaceRequest& WithPlaceId(const Aws::String& value) { SetPlaceId(value); return *this;}

    /**
     * <p>The identifier of the place to find.</p>
     */
    inline GetPlaceRequest& WithPlaceId(Aws::String&& value) { SetPlaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the place to find.</p>
     */
    inline GetPlaceRequest& WithPlaceId(const char* value) { SetPlaceId(value); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
