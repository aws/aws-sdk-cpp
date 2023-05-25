/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class SearchPlaceIndexForTextRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchPlaceIndexForText"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline const Aws::Vector<double>& GetBiasPosition() const{ return m_biasPosition; }

    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }

    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline void SetBiasPosition(const Aws::Vector<double>& value) { m_biasPositionHasBeenSet = true; m_biasPosition = value; }

    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline void SetBiasPosition(Aws::Vector<double>&& value) { m_biasPositionHasBeenSet = true; m_biasPosition = std::move(value); }

    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline SearchPlaceIndexForTextRequest& WithBiasPosition(const Aws::Vector<double>& value) { SetBiasPosition(value); return *this;}

    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline SearchPlaceIndexForTextRequest& WithBiasPosition(Aws::Vector<double>&& value) { SetBiasPosition(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline SearchPlaceIndexForTextRequest& AddBiasPosition(double value) { m_biasPositionHasBeenSet = true; m_biasPosition.push_back(value); return *this; }


    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline const Aws::Vector<double>& GetFilterBBox() const{ return m_filterBBox; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline bool FilterBBoxHasBeenSet() const { return m_filterBBoxHasBeenSet; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline void SetFilterBBox(const Aws::Vector<double>& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = value; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline void SetFilterBBox(Aws::Vector<double>&& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = std::move(value); }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline SearchPlaceIndexForTextRequest& WithFilterBBox(const Aws::Vector<double>& value) { SetFilterBBox(value); return *this;}

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline SearchPlaceIndexForTextRequest& WithFilterBBox(Aws::Vector<double>&& value) { SetFilterBBox(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline SearchPlaceIndexForTextRequest& AddFilterBBox(double value) { m_filterBBoxHasBeenSet = true; m_filterBBox.push_back(value); return *this; }


    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetFilterCountries() const{ return m_filterCountries; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline bool FilterCountriesHasBeenSet() const { return m_filterCountriesHasBeenSet; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline void SetFilterCountries(const Aws::Vector<Aws::String>& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = value; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline void SetFilterCountries(Aws::Vector<Aws::String>&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = std::move(value); }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& WithFilterCountries(const Aws::Vector<Aws::String>& value) { SetFilterCountries(value); return *this;}

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& WithFilterCountries(Aws::Vector<Aws::String>&& value) { SetFilterCountries(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& AddFilterCountries(const Aws::String& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(value); return *this; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& AddFilterCountries(Aws::String&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(std::move(value)); return *this; }

    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& AddFilterCountries(const char* value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(value); return *this; }


    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline SearchPlaceIndexForTextRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::Vector<double> m_biasPosition;
    bool m_biasPositionHasBeenSet = false;

    Aws::Vector<double> m_filterBBox;
    bool m_filterBBoxHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterCountries;
    bool m_filterCountriesHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
