/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ExtraParamName.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>ExtraParam includes the following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ExtraParam">AWS
   * API Reference</a></p>
   */
  class ExtraParam
  {
  public:
    AWS_ROUTE53DOMAINS_API ExtraParam();
    AWS_ROUTE53DOMAINS_API ExtraParam(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API ExtraParam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an additional parameter that is required by a top-level domain.
     * Here are the top-level domains that require additional parameters and the names
     * of the parameters that they require:</p> <dl> <dt>.com.au and .net.au</dt> <dd>
     * <ul> <li> <p> <code>AU_ID_NUMBER</code> </p> </li> <li> <p>
     * <code>AU_ID_TYPE</code> </p> <p>Valid values include the following:</p> <ul>
     * <li> <p> <code>ABN</code> (Australian business number)</p> </li> <li> <p>
     * <code>ACN</code> (Australian company number)</p> </li> <li> <p> <code>TM</code>
     * (Trademark number)</p> </li> </ul> </li> </ul> </dd> <dt>.ca</dt> <dd> <ul> <li>
     * <p> <code>BRAND_NUMBER</code> </p> </li> <li> <p>
     * <code>CA_BUSINESS_ENTITY_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>BANK</code> (Bank)</p> </li> <li> <p>
     * <code>COMMERCIAL_COMPANY</code> (Commercial company)</p> </li> <li> <p>
     * <code>COMPANY</code> (Company)</p> </li> <li> <p> <code>COOPERATION</code>
     * (Cooperation)</p> </li> <li> <p> <code>COOPERATIVE</code> (Cooperative)</p>
     * </li> <li> <p> <code>COOPRIX</code> (Cooprix)</p> </li> <li> <p>
     * <code>CORP</code> (Corporation)</p> </li> <li> <p> <code>CREDIT_UNION</code>
     * (Credit union)</p> </li> <li> <p> <code>FOMIA</code> (Federation of mutual
     * insurance associations)</p> </li> <li> <p> <code>INC</code> (Incorporated)</p>
     * </li> <li> <p> <code>LTD</code> (Limited)</p> </li> <li> <p> <code>LTEE</code>
     * (Limitée)</p> </li> <li> <p> <code>LLC</code> (Limited liability
     * corporation)</p> </li> <li> <p> <code>LLP</code> (Limited liability
     * partnership)</p> </li> <li> <p> <code>LTE</code> (Lte.)</p> </li> <li> <p>
     * <code>MBA</code> (Mutual benefit association)</p> </li> <li> <p>
     * <code>MIC</code> (Mutual insurance company)</p> </li> <li> <p> <code>NFP</code>
     * (Not-for-profit corporation)</p> </li> <li> <p> <code>SA</code> (S.A.)</p> </li>
     * <li> <p> <code>SAVINGS_COMPANY</code> (Savings company)</p> </li> <li> <p>
     * <code>SAVINGS_UNION</code> (Savings union)</p> </li> <li> <p> <code>SARL</code>
     * (Société à responsabilité limitée)</p> </li> <li> <p> <code>TRUST</code>
     * (Trust)</p> </li> <li> <p> <code>ULC</code> (Unlimited liability
     * corporation)</p> </li> </ul> </li> <li> <p> <code>CA_LEGAL_TYPE</code> </p>
     * <p>When <code>ContactType</code> is <code>PERSON</code>, valid values include
     * the following:</p> <ul> <li> <p> <code>ABO</code> (Aboriginal Peoples indigenous
     * to Canada)</p> </li> <li> <p> <code>CCT</code> (Canadian citizen)</p> </li> <li>
     * <p> <code>LGR</code> (Legal Representative of a Canadian Citizen or Permanent
     * Resident)</p> </li> <li> <p> <code>RES</code> (Permanent resident of Canada)</p>
     * </li> </ul> <p>When <code>ContactType</code> is a value other than
     * <code>PERSON</code>, valid values include the following:</p> <ul> <li> <p>
     * <code>ASS</code> (Canadian unincorporated association)</p> </li> <li> <p>
     * <code>CCO</code> (Canadian corporation)</p> </li> <li> <p> <code>EDU</code>
     * (Canadian educational institution)</p> </li> <li> <p> <code>GOV</code>
     * (Government or government entity in Canada)</p> </li> <li> <p> <code>HOP</code>
     * (Canadian Hospital)</p> </li> <li> <p> <code>INB</code> (Indian Band recognized
     * by the Indian Act of Canada)</p> </li> <li> <p> <code>LAM</code> (Canadian
     * Library, Archive, or Museum)</p> </li> <li> <p> <code>MAJ</code> (Her/His
     * Majesty the Queen/King)</p> </li> <li> <p> <code>OMK</code> (Official mark
     * registered in Canada)</p> </li> <li> <p> <code>PLT</code> (Canadian Political
     * Party)</p> </li> <li> <p> <code>PRT</code> (Partnership Registered in
     * Canada)</p> </li> <li> <p> <code>TDM</code> (Trademark registered in Canada)</p>
     * </li> <li> <p> <code>TRD</code> (Canadian Trade Union)</p> </li> <li> <p>
     * <code>TRS</code> (Trust established in Canada)</p> </li> </ul> </li> </ul> </dd>
     * <dt>.es</dt> <dd> <ul> <li> <p> <code>ES_IDENTIFICATION</code> </p> <p>The value
     * of <code>ES_IDENTIFICATION</code> depends on the following values:</p> <ul> <li>
     * <p>The value of <code>ES_LEGAL_FORM</code> </p> </li> <li> <p>The value of
     * <code>ES_IDENTIFICATION_TYPE</code> </p> </li> </ul> <p> <b>If
     * <code>ES_LEGAL_FORM</code> is any value other than <code>INDIVIDUAL</code>:</b>
     * </p> <ul> <li> <p>Specify 1 letter + 8 numbers (CIF [Certificado de
     * Identificación Fiscal])</p> </li> <li> <p>Example: B12345678</p> </li> </ul> <p>
     * <b>If <code>ES_LEGAL_FORM</code> is <code>INDIVIDUAL</code>, the value that you
     * specify for <code>ES_IDENTIFICATION</code> depends on the value of
     * <code>ES_IDENTIFICATION_TYPE</code>:</b> </p> <ul> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>DNI_AND_NIF</code> (for Spanish
     * contacts):</p> <ul> <li> <p>Specify 8 numbers + 1 letter (DNI [Documento
     * Nacional de Identidad], NIF [Número de Identificación Fiscal])</p> </li> <li>
     * <p>Example: 12345678M</p> </li> </ul> </li> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>NIE</code> (for foreigners with
     * legal residence):</p> <ul> <li> <p>Specify 1 letter + 7 numbers + 1 letter ( NIE
     * [Número de Identidad de Extranjero])</p> </li> <li> <p>Example: Y1234567X</p>
     * </li> </ul> </li> <li> <p>If <code>ES_IDENTIFICATION_TYPE</code> is
     * <code>OTHER</code> (for contacts outside of Spain):</p> <ul> <li> <p>Specify a
     * passport number, drivers license number, or national identity card number</p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>ES_IDENTIFICATION_TYPE</code> </p>
     * <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>DNI_AND_NIF</code> (For Spanish contacts)</p> </li> <li> <p>
     * <code>NIE</code> (For foreigners with legal residence)</p> </li> <li> <p>
     * <code>OTHER</code> (For contacts outside of Spain)</p> </li> </ul> </li> <li>
     * <p> <code>ES_LEGAL_FORM</code> </p> <p>Valid values include the following:</p>
     * <ul> <li> <p> <code>ASSOCIATION</code> </p> </li> <li> <p>
     * <code>CENTRAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>CIVIL_SOCIETY</code> </p> </li> <li> <p> <code>COMMUNITY_OF_OWNERS</code>
     * </p> </li> <li> <p> <code>COMMUNITY_PROPERTY</code> </p> </li> <li> <p>
     * <code>CONSULATE</code> </p> </li> <li> <p> <code>COOPERATIVE</code> </p> </li>
     * <li> <p> <code>DESIGNATION_OF_ORIGIN_SUPERVISORY_COUNCIL</code> </p> </li> <li>
     * <p> <code>ECONOMIC_INTEREST_GROUP</code> </p> </li> <li> <p>
     * <code>EMBASSY</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGING_NATURAL_AREAS</code> </p> </li> <li> <p>
     * <code>FARM_PARTNERSHIP</code> </p> </li> <li> <p> <code>FOUNDATION</code> </p>
     * </li> <li> <p> <code>GENERAL_AND_LIMITED_PARTNERSHIP</code> </p> </li> <li> <p>
     * <code>GENERAL_PARTNERSHIP</code> </p> </li> <li> <p> <code>INDIVIDUAL</code>
     * </p> </li> <li> <p> <code>LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>LOCAL_AUTHORITY</code> </p> </li> <li> <p>
     * <code>LOCAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>MUTUAL_INSURANCE_COMPANY</code> </p> </li> <li> <p>
     * <code>NATIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>ORDER_OR_RELIGIOUS_INSTITUTION</code> </p> </li> <li> <p> <code>OTHERS
     * (Only for contacts outside of Spain)</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p>
     * <code>PROFESSIONAL_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LAW_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>REGIONAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>REGIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>SAVINGS_BANK</code> </p> </li> <li> <p> <code>SPANISH_OFFICE</code> </p>
     * </li> <li> <p> <code>SPORTS_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>SPORTS_FEDERATION</code> </p> </li> <li> <p>
     * <code>SPORTS_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>TEMPORARY_ALLIANCE_OF_ENTERPRISES</code> </p> </li> <li> <p>
     * <code>TRADE_UNION</code> </p> </li> <li> <p> <code>WORKER_OWNED_COMPANY</code>
     * </p> </li> <li> <p> <code>WORKER_OWNED_LIMITED_COMPANY</code> </p> </li> </ul>
     * </li> </ul> </dd> <dt>.eu</dt> <dd> <ul> <li> <p> <code>
     * EU_COUNTRY_OF_CITIZENSHIP</code> </p> </li> </ul> </dd> <dt>.fi</dt> <dd> <ul>
     * <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>FI_BUSINESS_NUMBER</code> </p> </li> <li> <p> <code>FI_ID_NUMBER</code>
     * </p> </li> <li> <p> <code>FI_NATIONALITY</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>FINNISH</code> </p> </li> <li> <p>
     * <code>NOT_FINNISH</code> </p> </li> </ul> </li> <li> <p>
     * <code>FI_ORGANIZATION_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>COMPANY</code> </p> </li> <li> <p>
     * <code>CORPORATION</code> </p> </li> <li> <p> <code>GOVERNMENT</code> </p> </li>
     * <li> <p> <code>INSTITUTION</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p> <code>PUBLIC_COMMUNITY</code>
     * </p> </li> <li> <p> <code>TOWNSHIP</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.fr</dt> <dd> <ul> <li> <p> <code>BIRTH_CITY</code> </p> </li> <li> <p>
     * <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>BIRTH_DEPARTMENT</code>: Specify the INSEE code that corresponds with the
     * department where the contact was born. If the contact was born somewhere other
     * than France or its overseas departments, specify <code>99</code>. For more
     * information, including a list of departments and the corresponding INSEE
     * numbers, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Departments_of_France">Departments of
     * France</a>.</p> </li> <li> <p> <code>BRAND_NUMBER</code> </p> </li> </ul> </dd>
     * <dt>.it</dt> <dd> <ul> <li> <p> <code>IT_NATIONALITY</code> </p> </li> <li> <p>
     * <code>IT_PIN</code> </p> </li> <li> <p> <code>IT_REGISTRANT_ENTITY_TYPE</code>
     * </p> <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>FOREIGNERS</code> </p> </li> <li> <p> <code>FREELANCE_WORKERS</code>
     * (Freelance workers and professionals)</p> </li> <li> <p>
     * <code>ITALIAN_COMPANIES</code> (Italian companies and one-person companies)</p>
     * </li> <li> <p> <code>NON_PROFIT_ORGANIZATIONS</code> </p> </li> <li> <p>
     * <code>OTHER_SUBJECTS</code> </p> </li> <li> <p>
     * <code>PUBLIC_ORGANIZATIONS</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.ru</dt> <dd> <ul> <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li>
     * <li> <p> <code>RU_PASSPORT_DATA</code> </p> </li> </ul> </dd> <dt>.se</dt> <dd>
     * <ul> <li> <p> <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>SE_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.sg</dt> <dd> <ul> <li> <p>
     * <code>SG_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.uk, .co.uk, .me.uk, and
     * .org.uk</dt> <dd> <ul> <li> <p> <code>UK_CONTACT_TYPE</code> </p> <p>Valid
     * values include the following:</p> <ul> <li> <p> <code>CRC</code> (UK Corporation
     * by Royal Charter)</p> </li> <li> <p> <code>FCORP</code> (Non-UK Corporation)</p>
     * </li> <li> <p> <code>FIND</code> (Non-UK Individual, representing self)</p>
     * </li> <li> <p> <code>FOTHER</code> (Non-UK Entity that does not fit into any
     * other category)</p> </li> <li> <p> <code>GOV</code> (UK Government Body)</p>
     * </li> <li> <p> <code>IND</code> (UK Individual (representing self))</p> </li>
     * <li> <p> <code>IP</code> (UK Industrial/Provident Registered Company)</p> </li>
     * <li> <p> <code>LLP</code> (UK Limited Liability Partnership)</p> </li> <li> <p>
     * <code>LTD</code> (UK Limited Company)</p> </li> <li> <p> <code>OTHER</code> (UK
     * Entity that does not fit into any other category)</p> </li> <li> <p>
     * <code>PLC</code> (UK Public Limited Company)</p> </li> <li> <p>
     * <code>PTNR</code> (UK Partnership)</p> </li> <li> <p> <code>RCHAR</code> (UK
     * Registered Charity)</p> </li> <li> <p> <code>SCH</code> (UK School)</p> </li>
     * <li> <p> <code>STAT</code> (UK Statutory Body)</p> </li> <li> <p>
     * <code>STRA</code> (UK Sole Trader)</p> </li> </ul> </li> <li> <p>
     * <code>UK_COMPANY_NUMBER</code> </p> </li> </ul> </dd> </dl> <p>In addition, many
     * TLDs require a <code>VAT_NUMBER</code>.</p>
     */
    inline const ExtraParamName& GetName() const{ return m_name; }

    /**
     * <p>The name of an additional parameter that is required by a top-level domain.
     * Here are the top-level domains that require additional parameters and the names
     * of the parameters that they require:</p> <dl> <dt>.com.au and .net.au</dt> <dd>
     * <ul> <li> <p> <code>AU_ID_NUMBER</code> </p> </li> <li> <p>
     * <code>AU_ID_TYPE</code> </p> <p>Valid values include the following:</p> <ul>
     * <li> <p> <code>ABN</code> (Australian business number)</p> </li> <li> <p>
     * <code>ACN</code> (Australian company number)</p> </li> <li> <p> <code>TM</code>
     * (Trademark number)</p> </li> </ul> </li> </ul> </dd> <dt>.ca</dt> <dd> <ul> <li>
     * <p> <code>BRAND_NUMBER</code> </p> </li> <li> <p>
     * <code>CA_BUSINESS_ENTITY_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>BANK</code> (Bank)</p> </li> <li> <p>
     * <code>COMMERCIAL_COMPANY</code> (Commercial company)</p> </li> <li> <p>
     * <code>COMPANY</code> (Company)</p> </li> <li> <p> <code>COOPERATION</code>
     * (Cooperation)</p> </li> <li> <p> <code>COOPERATIVE</code> (Cooperative)</p>
     * </li> <li> <p> <code>COOPRIX</code> (Cooprix)</p> </li> <li> <p>
     * <code>CORP</code> (Corporation)</p> </li> <li> <p> <code>CREDIT_UNION</code>
     * (Credit union)</p> </li> <li> <p> <code>FOMIA</code> (Federation of mutual
     * insurance associations)</p> </li> <li> <p> <code>INC</code> (Incorporated)</p>
     * </li> <li> <p> <code>LTD</code> (Limited)</p> </li> <li> <p> <code>LTEE</code>
     * (Limitée)</p> </li> <li> <p> <code>LLC</code> (Limited liability
     * corporation)</p> </li> <li> <p> <code>LLP</code> (Limited liability
     * partnership)</p> </li> <li> <p> <code>LTE</code> (Lte.)</p> </li> <li> <p>
     * <code>MBA</code> (Mutual benefit association)</p> </li> <li> <p>
     * <code>MIC</code> (Mutual insurance company)</p> </li> <li> <p> <code>NFP</code>
     * (Not-for-profit corporation)</p> </li> <li> <p> <code>SA</code> (S.A.)</p> </li>
     * <li> <p> <code>SAVINGS_COMPANY</code> (Savings company)</p> </li> <li> <p>
     * <code>SAVINGS_UNION</code> (Savings union)</p> </li> <li> <p> <code>SARL</code>
     * (Société à responsabilité limitée)</p> </li> <li> <p> <code>TRUST</code>
     * (Trust)</p> </li> <li> <p> <code>ULC</code> (Unlimited liability
     * corporation)</p> </li> </ul> </li> <li> <p> <code>CA_LEGAL_TYPE</code> </p>
     * <p>When <code>ContactType</code> is <code>PERSON</code>, valid values include
     * the following:</p> <ul> <li> <p> <code>ABO</code> (Aboriginal Peoples indigenous
     * to Canada)</p> </li> <li> <p> <code>CCT</code> (Canadian citizen)</p> </li> <li>
     * <p> <code>LGR</code> (Legal Representative of a Canadian Citizen or Permanent
     * Resident)</p> </li> <li> <p> <code>RES</code> (Permanent resident of Canada)</p>
     * </li> </ul> <p>When <code>ContactType</code> is a value other than
     * <code>PERSON</code>, valid values include the following:</p> <ul> <li> <p>
     * <code>ASS</code> (Canadian unincorporated association)</p> </li> <li> <p>
     * <code>CCO</code> (Canadian corporation)</p> </li> <li> <p> <code>EDU</code>
     * (Canadian educational institution)</p> </li> <li> <p> <code>GOV</code>
     * (Government or government entity in Canada)</p> </li> <li> <p> <code>HOP</code>
     * (Canadian Hospital)</p> </li> <li> <p> <code>INB</code> (Indian Band recognized
     * by the Indian Act of Canada)</p> </li> <li> <p> <code>LAM</code> (Canadian
     * Library, Archive, or Museum)</p> </li> <li> <p> <code>MAJ</code> (Her/His
     * Majesty the Queen/King)</p> </li> <li> <p> <code>OMK</code> (Official mark
     * registered in Canada)</p> </li> <li> <p> <code>PLT</code> (Canadian Political
     * Party)</p> </li> <li> <p> <code>PRT</code> (Partnership Registered in
     * Canada)</p> </li> <li> <p> <code>TDM</code> (Trademark registered in Canada)</p>
     * </li> <li> <p> <code>TRD</code> (Canadian Trade Union)</p> </li> <li> <p>
     * <code>TRS</code> (Trust established in Canada)</p> </li> </ul> </li> </ul> </dd>
     * <dt>.es</dt> <dd> <ul> <li> <p> <code>ES_IDENTIFICATION</code> </p> <p>The value
     * of <code>ES_IDENTIFICATION</code> depends on the following values:</p> <ul> <li>
     * <p>The value of <code>ES_LEGAL_FORM</code> </p> </li> <li> <p>The value of
     * <code>ES_IDENTIFICATION_TYPE</code> </p> </li> </ul> <p> <b>If
     * <code>ES_LEGAL_FORM</code> is any value other than <code>INDIVIDUAL</code>:</b>
     * </p> <ul> <li> <p>Specify 1 letter + 8 numbers (CIF [Certificado de
     * Identificación Fiscal])</p> </li> <li> <p>Example: B12345678</p> </li> </ul> <p>
     * <b>If <code>ES_LEGAL_FORM</code> is <code>INDIVIDUAL</code>, the value that you
     * specify for <code>ES_IDENTIFICATION</code> depends on the value of
     * <code>ES_IDENTIFICATION_TYPE</code>:</b> </p> <ul> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>DNI_AND_NIF</code> (for Spanish
     * contacts):</p> <ul> <li> <p>Specify 8 numbers + 1 letter (DNI [Documento
     * Nacional de Identidad], NIF [Número de Identificación Fiscal])</p> </li> <li>
     * <p>Example: 12345678M</p> </li> </ul> </li> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>NIE</code> (for foreigners with
     * legal residence):</p> <ul> <li> <p>Specify 1 letter + 7 numbers + 1 letter ( NIE
     * [Número de Identidad de Extranjero])</p> </li> <li> <p>Example: Y1234567X</p>
     * </li> </ul> </li> <li> <p>If <code>ES_IDENTIFICATION_TYPE</code> is
     * <code>OTHER</code> (for contacts outside of Spain):</p> <ul> <li> <p>Specify a
     * passport number, drivers license number, or national identity card number</p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>ES_IDENTIFICATION_TYPE</code> </p>
     * <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>DNI_AND_NIF</code> (For Spanish contacts)</p> </li> <li> <p>
     * <code>NIE</code> (For foreigners with legal residence)</p> </li> <li> <p>
     * <code>OTHER</code> (For contacts outside of Spain)</p> </li> </ul> </li> <li>
     * <p> <code>ES_LEGAL_FORM</code> </p> <p>Valid values include the following:</p>
     * <ul> <li> <p> <code>ASSOCIATION</code> </p> </li> <li> <p>
     * <code>CENTRAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>CIVIL_SOCIETY</code> </p> </li> <li> <p> <code>COMMUNITY_OF_OWNERS</code>
     * </p> </li> <li> <p> <code>COMMUNITY_PROPERTY</code> </p> </li> <li> <p>
     * <code>CONSULATE</code> </p> </li> <li> <p> <code>COOPERATIVE</code> </p> </li>
     * <li> <p> <code>DESIGNATION_OF_ORIGIN_SUPERVISORY_COUNCIL</code> </p> </li> <li>
     * <p> <code>ECONOMIC_INTEREST_GROUP</code> </p> </li> <li> <p>
     * <code>EMBASSY</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGING_NATURAL_AREAS</code> </p> </li> <li> <p>
     * <code>FARM_PARTNERSHIP</code> </p> </li> <li> <p> <code>FOUNDATION</code> </p>
     * </li> <li> <p> <code>GENERAL_AND_LIMITED_PARTNERSHIP</code> </p> </li> <li> <p>
     * <code>GENERAL_PARTNERSHIP</code> </p> </li> <li> <p> <code>INDIVIDUAL</code>
     * </p> </li> <li> <p> <code>LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>LOCAL_AUTHORITY</code> </p> </li> <li> <p>
     * <code>LOCAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>MUTUAL_INSURANCE_COMPANY</code> </p> </li> <li> <p>
     * <code>NATIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>ORDER_OR_RELIGIOUS_INSTITUTION</code> </p> </li> <li> <p> <code>OTHERS
     * (Only for contacts outside of Spain)</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p>
     * <code>PROFESSIONAL_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LAW_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>REGIONAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>REGIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>SAVINGS_BANK</code> </p> </li> <li> <p> <code>SPANISH_OFFICE</code> </p>
     * </li> <li> <p> <code>SPORTS_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>SPORTS_FEDERATION</code> </p> </li> <li> <p>
     * <code>SPORTS_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>TEMPORARY_ALLIANCE_OF_ENTERPRISES</code> </p> </li> <li> <p>
     * <code>TRADE_UNION</code> </p> </li> <li> <p> <code>WORKER_OWNED_COMPANY</code>
     * </p> </li> <li> <p> <code>WORKER_OWNED_LIMITED_COMPANY</code> </p> </li> </ul>
     * </li> </ul> </dd> <dt>.eu</dt> <dd> <ul> <li> <p> <code>
     * EU_COUNTRY_OF_CITIZENSHIP</code> </p> </li> </ul> </dd> <dt>.fi</dt> <dd> <ul>
     * <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>FI_BUSINESS_NUMBER</code> </p> </li> <li> <p> <code>FI_ID_NUMBER</code>
     * </p> </li> <li> <p> <code>FI_NATIONALITY</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>FINNISH</code> </p> </li> <li> <p>
     * <code>NOT_FINNISH</code> </p> </li> </ul> </li> <li> <p>
     * <code>FI_ORGANIZATION_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>COMPANY</code> </p> </li> <li> <p>
     * <code>CORPORATION</code> </p> </li> <li> <p> <code>GOVERNMENT</code> </p> </li>
     * <li> <p> <code>INSTITUTION</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p> <code>PUBLIC_COMMUNITY</code>
     * </p> </li> <li> <p> <code>TOWNSHIP</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.fr</dt> <dd> <ul> <li> <p> <code>BIRTH_CITY</code> </p> </li> <li> <p>
     * <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>BIRTH_DEPARTMENT</code>: Specify the INSEE code that corresponds with the
     * department where the contact was born. If the contact was born somewhere other
     * than France or its overseas departments, specify <code>99</code>. For more
     * information, including a list of departments and the corresponding INSEE
     * numbers, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Departments_of_France">Departments of
     * France</a>.</p> </li> <li> <p> <code>BRAND_NUMBER</code> </p> </li> </ul> </dd>
     * <dt>.it</dt> <dd> <ul> <li> <p> <code>IT_NATIONALITY</code> </p> </li> <li> <p>
     * <code>IT_PIN</code> </p> </li> <li> <p> <code>IT_REGISTRANT_ENTITY_TYPE</code>
     * </p> <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>FOREIGNERS</code> </p> </li> <li> <p> <code>FREELANCE_WORKERS</code>
     * (Freelance workers and professionals)</p> </li> <li> <p>
     * <code>ITALIAN_COMPANIES</code> (Italian companies and one-person companies)</p>
     * </li> <li> <p> <code>NON_PROFIT_ORGANIZATIONS</code> </p> </li> <li> <p>
     * <code>OTHER_SUBJECTS</code> </p> </li> <li> <p>
     * <code>PUBLIC_ORGANIZATIONS</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.ru</dt> <dd> <ul> <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li>
     * <li> <p> <code>RU_PASSPORT_DATA</code> </p> </li> </ul> </dd> <dt>.se</dt> <dd>
     * <ul> <li> <p> <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>SE_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.sg</dt> <dd> <ul> <li> <p>
     * <code>SG_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.uk, .co.uk, .me.uk, and
     * .org.uk</dt> <dd> <ul> <li> <p> <code>UK_CONTACT_TYPE</code> </p> <p>Valid
     * values include the following:</p> <ul> <li> <p> <code>CRC</code> (UK Corporation
     * by Royal Charter)</p> </li> <li> <p> <code>FCORP</code> (Non-UK Corporation)</p>
     * </li> <li> <p> <code>FIND</code> (Non-UK Individual, representing self)</p>
     * </li> <li> <p> <code>FOTHER</code> (Non-UK Entity that does not fit into any
     * other category)</p> </li> <li> <p> <code>GOV</code> (UK Government Body)</p>
     * </li> <li> <p> <code>IND</code> (UK Individual (representing self))</p> </li>
     * <li> <p> <code>IP</code> (UK Industrial/Provident Registered Company)</p> </li>
     * <li> <p> <code>LLP</code> (UK Limited Liability Partnership)</p> </li> <li> <p>
     * <code>LTD</code> (UK Limited Company)</p> </li> <li> <p> <code>OTHER</code> (UK
     * Entity that does not fit into any other category)</p> </li> <li> <p>
     * <code>PLC</code> (UK Public Limited Company)</p> </li> <li> <p>
     * <code>PTNR</code> (UK Partnership)</p> </li> <li> <p> <code>RCHAR</code> (UK
     * Registered Charity)</p> </li> <li> <p> <code>SCH</code> (UK School)</p> </li>
     * <li> <p> <code>STAT</code> (UK Statutory Body)</p> </li> <li> <p>
     * <code>STRA</code> (UK Sole Trader)</p> </li> </ul> </li> <li> <p>
     * <code>UK_COMPANY_NUMBER</code> </p> </li> </ul> </dd> </dl> <p>In addition, many
     * TLDs require a <code>VAT_NUMBER</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an additional parameter that is required by a top-level domain.
     * Here are the top-level domains that require additional parameters and the names
     * of the parameters that they require:</p> <dl> <dt>.com.au and .net.au</dt> <dd>
     * <ul> <li> <p> <code>AU_ID_NUMBER</code> </p> </li> <li> <p>
     * <code>AU_ID_TYPE</code> </p> <p>Valid values include the following:</p> <ul>
     * <li> <p> <code>ABN</code> (Australian business number)</p> </li> <li> <p>
     * <code>ACN</code> (Australian company number)</p> </li> <li> <p> <code>TM</code>
     * (Trademark number)</p> </li> </ul> </li> </ul> </dd> <dt>.ca</dt> <dd> <ul> <li>
     * <p> <code>BRAND_NUMBER</code> </p> </li> <li> <p>
     * <code>CA_BUSINESS_ENTITY_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>BANK</code> (Bank)</p> </li> <li> <p>
     * <code>COMMERCIAL_COMPANY</code> (Commercial company)</p> </li> <li> <p>
     * <code>COMPANY</code> (Company)</p> </li> <li> <p> <code>COOPERATION</code>
     * (Cooperation)</p> </li> <li> <p> <code>COOPERATIVE</code> (Cooperative)</p>
     * </li> <li> <p> <code>COOPRIX</code> (Cooprix)</p> </li> <li> <p>
     * <code>CORP</code> (Corporation)</p> </li> <li> <p> <code>CREDIT_UNION</code>
     * (Credit union)</p> </li> <li> <p> <code>FOMIA</code> (Federation of mutual
     * insurance associations)</p> </li> <li> <p> <code>INC</code> (Incorporated)</p>
     * </li> <li> <p> <code>LTD</code> (Limited)</p> </li> <li> <p> <code>LTEE</code>
     * (Limitée)</p> </li> <li> <p> <code>LLC</code> (Limited liability
     * corporation)</p> </li> <li> <p> <code>LLP</code> (Limited liability
     * partnership)</p> </li> <li> <p> <code>LTE</code> (Lte.)</p> </li> <li> <p>
     * <code>MBA</code> (Mutual benefit association)</p> </li> <li> <p>
     * <code>MIC</code> (Mutual insurance company)</p> </li> <li> <p> <code>NFP</code>
     * (Not-for-profit corporation)</p> </li> <li> <p> <code>SA</code> (S.A.)</p> </li>
     * <li> <p> <code>SAVINGS_COMPANY</code> (Savings company)</p> </li> <li> <p>
     * <code>SAVINGS_UNION</code> (Savings union)</p> </li> <li> <p> <code>SARL</code>
     * (Société à responsabilité limitée)</p> </li> <li> <p> <code>TRUST</code>
     * (Trust)</p> </li> <li> <p> <code>ULC</code> (Unlimited liability
     * corporation)</p> </li> </ul> </li> <li> <p> <code>CA_LEGAL_TYPE</code> </p>
     * <p>When <code>ContactType</code> is <code>PERSON</code>, valid values include
     * the following:</p> <ul> <li> <p> <code>ABO</code> (Aboriginal Peoples indigenous
     * to Canada)</p> </li> <li> <p> <code>CCT</code> (Canadian citizen)</p> </li> <li>
     * <p> <code>LGR</code> (Legal Representative of a Canadian Citizen or Permanent
     * Resident)</p> </li> <li> <p> <code>RES</code> (Permanent resident of Canada)</p>
     * </li> </ul> <p>When <code>ContactType</code> is a value other than
     * <code>PERSON</code>, valid values include the following:</p> <ul> <li> <p>
     * <code>ASS</code> (Canadian unincorporated association)</p> </li> <li> <p>
     * <code>CCO</code> (Canadian corporation)</p> </li> <li> <p> <code>EDU</code>
     * (Canadian educational institution)</p> </li> <li> <p> <code>GOV</code>
     * (Government or government entity in Canada)</p> </li> <li> <p> <code>HOP</code>
     * (Canadian Hospital)</p> </li> <li> <p> <code>INB</code> (Indian Band recognized
     * by the Indian Act of Canada)</p> </li> <li> <p> <code>LAM</code> (Canadian
     * Library, Archive, or Museum)</p> </li> <li> <p> <code>MAJ</code> (Her/His
     * Majesty the Queen/King)</p> </li> <li> <p> <code>OMK</code> (Official mark
     * registered in Canada)</p> </li> <li> <p> <code>PLT</code> (Canadian Political
     * Party)</p> </li> <li> <p> <code>PRT</code> (Partnership Registered in
     * Canada)</p> </li> <li> <p> <code>TDM</code> (Trademark registered in Canada)</p>
     * </li> <li> <p> <code>TRD</code> (Canadian Trade Union)</p> </li> <li> <p>
     * <code>TRS</code> (Trust established in Canada)</p> </li> </ul> </li> </ul> </dd>
     * <dt>.es</dt> <dd> <ul> <li> <p> <code>ES_IDENTIFICATION</code> </p> <p>The value
     * of <code>ES_IDENTIFICATION</code> depends on the following values:</p> <ul> <li>
     * <p>The value of <code>ES_LEGAL_FORM</code> </p> </li> <li> <p>The value of
     * <code>ES_IDENTIFICATION_TYPE</code> </p> </li> </ul> <p> <b>If
     * <code>ES_LEGAL_FORM</code> is any value other than <code>INDIVIDUAL</code>:</b>
     * </p> <ul> <li> <p>Specify 1 letter + 8 numbers (CIF [Certificado de
     * Identificación Fiscal])</p> </li> <li> <p>Example: B12345678</p> </li> </ul> <p>
     * <b>If <code>ES_LEGAL_FORM</code> is <code>INDIVIDUAL</code>, the value that you
     * specify for <code>ES_IDENTIFICATION</code> depends on the value of
     * <code>ES_IDENTIFICATION_TYPE</code>:</b> </p> <ul> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>DNI_AND_NIF</code> (for Spanish
     * contacts):</p> <ul> <li> <p>Specify 8 numbers + 1 letter (DNI [Documento
     * Nacional de Identidad], NIF [Número de Identificación Fiscal])</p> </li> <li>
     * <p>Example: 12345678M</p> </li> </ul> </li> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>NIE</code> (for foreigners with
     * legal residence):</p> <ul> <li> <p>Specify 1 letter + 7 numbers + 1 letter ( NIE
     * [Número de Identidad de Extranjero])</p> </li> <li> <p>Example: Y1234567X</p>
     * </li> </ul> </li> <li> <p>If <code>ES_IDENTIFICATION_TYPE</code> is
     * <code>OTHER</code> (for contacts outside of Spain):</p> <ul> <li> <p>Specify a
     * passport number, drivers license number, or national identity card number</p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>ES_IDENTIFICATION_TYPE</code> </p>
     * <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>DNI_AND_NIF</code> (For Spanish contacts)</p> </li> <li> <p>
     * <code>NIE</code> (For foreigners with legal residence)</p> </li> <li> <p>
     * <code>OTHER</code> (For contacts outside of Spain)</p> </li> </ul> </li> <li>
     * <p> <code>ES_LEGAL_FORM</code> </p> <p>Valid values include the following:</p>
     * <ul> <li> <p> <code>ASSOCIATION</code> </p> </li> <li> <p>
     * <code>CENTRAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>CIVIL_SOCIETY</code> </p> </li> <li> <p> <code>COMMUNITY_OF_OWNERS</code>
     * </p> </li> <li> <p> <code>COMMUNITY_PROPERTY</code> </p> </li> <li> <p>
     * <code>CONSULATE</code> </p> </li> <li> <p> <code>COOPERATIVE</code> </p> </li>
     * <li> <p> <code>DESIGNATION_OF_ORIGIN_SUPERVISORY_COUNCIL</code> </p> </li> <li>
     * <p> <code>ECONOMIC_INTEREST_GROUP</code> </p> </li> <li> <p>
     * <code>EMBASSY</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGING_NATURAL_AREAS</code> </p> </li> <li> <p>
     * <code>FARM_PARTNERSHIP</code> </p> </li> <li> <p> <code>FOUNDATION</code> </p>
     * </li> <li> <p> <code>GENERAL_AND_LIMITED_PARTNERSHIP</code> </p> </li> <li> <p>
     * <code>GENERAL_PARTNERSHIP</code> </p> </li> <li> <p> <code>INDIVIDUAL</code>
     * </p> </li> <li> <p> <code>LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>LOCAL_AUTHORITY</code> </p> </li> <li> <p>
     * <code>LOCAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>MUTUAL_INSURANCE_COMPANY</code> </p> </li> <li> <p>
     * <code>NATIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>ORDER_OR_RELIGIOUS_INSTITUTION</code> </p> </li> <li> <p> <code>OTHERS
     * (Only for contacts outside of Spain)</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p>
     * <code>PROFESSIONAL_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LAW_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>REGIONAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>REGIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>SAVINGS_BANK</code> </p> </li> <li> <p> <code>SPANISH_OFFICE</code> </p>
     * </li> <li> <p> <code>SPORTS_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>SPORTS_FEDERATION</code> </p> </li> <li> <p>
     * <code>SPORTS_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>TEMPORARY_ALLIANCE_OF_ENTERPRISES</code> </p> </li> <li> <p>
     * <code>TRADE_UNION</code> </p> </li> <li> <p> <code>WORKER_OWNED_COMPANY</code>
     * </p> </li> <li> <p> <code>WORKER_OWNED_LIMITED_COMPANY</code> </p> </li> </ul>
     * </li> </ul> </dd> <dt>.eu</dt> <dd> <ul> <li> <p> <code>
     * EU_COUNTRY_OF_CITIZENSHIP</code> </p> </li> </ul> </dd> <dt>.fi</dt> <dd> <ul>
     * <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>FI_BUSINESS_NUMBER</code> </p> </li> <li> <p> <code>FI_ID_NUMBER</code>
     * </p> </li> <li> <p> <code>FI_NATIONALITY</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>FINNISH</code> </p> </li> <li> <p>
     * <code>NOT_FINNISH</code> </p> </li> </ul> </li> <li> <p>
     * <code>FI_ORGANIZATION_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>COMPANY</code> </p> </li> <li> <p>
     * <code>CORPORATION</code> </p> </li> <li> <p> <code>GOVERNMENT</code> </p> </li>
     * <li> <p> <code>INSTITUTION</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p> <code>PUBLIC_COMMUNITY</code>
     * </p> </li> <li> <p> <code>TOWNSHIP</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.fr</dt> <dd> <ul> <li> <p> <code>BIRTH_CITY</code> </p> </li> <li> <p>
     * <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>BIRTH_DEPARTMENT</code>: Specify the INSEE code that corresponds with the
     * department where the contact was born. If the contact was born somewhere other
     * than France or its overseas departments, specify <code>99</code>. For more
     * information, including a list of departments and the corresponding INSEE
     * numbers, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Departments_of_France">Departments of
     * France</a>.</p> </li> <li> <p> <code>BRAND_NUMBER</code> </p> </li> </ul> </dd>
     * <dt>.it</dt> <dd> <ul> <li> <p> <code>IT_NATIONALITY</code> </p> </li> <li> <p>
     * <code>IT_PIN</code> </p> </li> <li> <p> <code>IT_REGISTRANT_ENTITY_TYPE</code>
     * </p> <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>FOREIGNERS</code> </p> </li> <li> <p> <code>FREELANCE_WORKERS</code>
     * (Freelance workers and professionals)</p> </li> <li> <p>
     * <code>ITALIAN_COMPANIES</code> (Italian companies and one-person companies)</p>
     * </li> <li> <p> <code>NON_PROFIT_ORGANIZATIONS</code> </p> </li> <li> <p>
     * <code>OTHER_SUBJECTS</code> </p> </li> <li> <p>
     * <code>PUBLIC_ORGANIZATIONS</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.ru</dt> <dd> <ul> <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li>
     * <li> <p> <code>RU_PASSPORT_DATA</code> </p> </li> </ul> </dd> <dt>.se</dt> <dd>
     * <ul> <li> <p> <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>SE_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.sg</dt> <dd> <ul> <li> <p>
     * <code>SG_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.uk, .co.uk, .me.uk, and
     * .org.uk</dt> <dd> <ul> <li> <p> <code>UK_CONTACT_TYPE</code> </p> <p>Valid
     * values include the following:</p> <ul> <li> <p> <code>CRC</code> (UK Corporation
     * by Royal Charter)</p> </li> <li> <p> <code>FCORP</code> (Non-UK Corporation)</p>
     * </li> <li> <p> <code>FIND</code> (Non-UK Individual, representing self)</p>
     * </li> <li> <p> <code>FOTHER</code> (Non-UK Entity that does not fit into any
     * other category)</p> </li> <li> <p> <code>GOV</code> (UK Government Body)</p>
     * </li> <li> <p> <code>IND</code> (UK Individual (representing self))</p> </li>
     * <li> <p> <code>IP</code> (UK Industrial/Provident Registered Company)</p> </li>
     * <li> <p> <code>LLP</code> (UK Limited Liability Partnership)</p> </li> <li> <p>
     * <code>LTD</code> (UK Limited Company)</p> </li> <li> <p> <code>OTHER</code> (UK
     * Entity that does not fit into any other category)</p> </li> <li> <p>
     * <code>PLC</code> (UK Public Limited Company)</p> </li> <li> <p>
     * <code>PTNR</code> (UK Partnership)</p> </li> <li> <p> <code>RCHAR</code> (UK
     * Registered Charity)</p> </li> <li> <p> <code>SCH</code> (UK School)</p> </li>
     * <li> <p> <code>STAT</code> (UK Statutory Body)</p> </li> <li> <p>
     * <code>STRA</code> (UK Sole Trader)</p> </li> </ul> </li> <li> <p>
     * <code>UK_COMPANY_NUMBER</code> </p> </li> </ul> </dd> </dl> <p>In addition, many
     * TLDs require a <code>VAT_NUMBER</code>.</p>
     */
    inline void SetName(const ExtraParamName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an additional parameter that is required by a top-level domain.
     * Here are the top-level domains that require additional parameters and the names
     * of the parameters that they require:</p> <dl> <dt>.com.au and .net.au</dt> <dd>
     * <ul> <li> <p> <code>AU_ID_NUMBER</code> </p> </li> <li> <p>
     * <code>AU_ID_TYPE</code> </p> <p>Valid values include the following:</p> <ul>
     * <li> <p> <code>ABN</code> (Australian business number)</p> </li> <li> <p>
     * <code>ACN</code> (Australian company number)</p> </li> <li> <p> <code>TM</code>
     * (Trademark number)</p> </li> </ul> </li> </ul> </dd> <dt>.ca</dt> <dd> <ul> <li>
     * <p> <code>BRAND_NUMBER</code> </p> </li> <li> <p>
     * <code>CA_BUSINESS_ENTITY_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>BANK</code> (Bank)</p> </li> <li> <p>
     * <code>COMMERCIAL_COMPANY</code> (Commercial company)</p> </li> <li> <p>
     * <code>COMPANY</code> (Company)</p> </li> <li> <p> <code>COOPERATION</code>
     * (Cooperation)</p> </li> <li> <p> <code>COOPERATIVE</code> (Cooperative)</p>
     * </li> <li> <p> <code>COOPRIX</code> (Cooprix)</p> </li> <li> <p>
     * <code>CORP</code> (Corporation)</p> </li> <li> <p> <code>CREDIT_UNION</code>
     * (Credit union)</p> </li> <li> <p> <code>FOMIA</code> (Federation of mutual
     * insurance associations)</p> </li> <li> <p> <code>INC</code> (Incorporated)</p>
     * </li> <li> <p> <code>LTD</code> (Limited)</p> </li> <li> <p> <code>LTEE</code>
     * (Limitée)</p> </li> <li> <p> <code>LLC</code> (Limited liability
     * corporation)</p> </li> <li> <p> <code>LLP</code> (Limited liability
     * partnership)</p> </li> <li> <p> <code>LTE</code> (Lte.)</p> </li> <li> <p>
     * <code>MBA</code> (Mutual benefit association)</p> </li> <li> <p>
     * <code>MIC</code> (Mutual insurance company)</p> </li> <li> <p> <code>NFP</code>
     * (Not-for-profit corporation)</p> </li> <li> <p> <code>SA</code> (S.A.)</p> </li>
     * <li> <p> <code>SAVINGS_COMPANY</code> (Savings company)</p> </li> <li> <p>
     * <code>SAVINGS_UNION</code> (Savings union)</p> </li> <li> <p> <code>SARL</code>
     * (Société à responsabilité limitée)</p> </li> <li> <p> <code>TRUST</code>
     * (Trust)</p> </li> <li> <p> <code>ULC</code> (Unlimited liability
     * corporation)</p> </li> </ul> </li> <li> <p> <code>CA_LEGAL_TYPE</code> </p>
     * <p>When <code>ContactType</code> is <code>PERSON</code>, valid values include
     * the following:</p> <ul> <li> <p> <code>ABO</code> (Aboriginal Peoples indigenous
     * to Canada)</p> </li> <li> <p> <code>CCT</code> (Canadian citizen)</p> </li> <li>
     * <p> <code>LGR</code> (Legal Representative of a Canadian Citizen or Permanent
     * Resident)</p> </li> <li> <p> <code>RES</code> (Permanent resident of Canada)</p>
     * </li> </ul> <p>When <code>ContactType</code> is a value other than
     * <code>PERSON</code>, valid values include the following:</p> <ul> <li> <p>
     * <code>ASS</code> (Canadian unincorporated association)</p> </li> <li> <p>
     * <code>CCO</code> (Canadian corporation)</p> </li> <li> <p> <code>EDU</code>
     * (Canadian educational institution)</p> </li> <li> <p> <code>GOV</code>
     * (Government or government entity in Canada)</p> </li> <li> <p> <code>HOP</code>
     * (Canadian Hospital)</p> </li> <li> <p> <code>INB</code> (Indian Band recognized
     * by the Indian Act of Canada)</p> </li> <li> <p> <code>LAM</code> (Canadian
     * Library, Archive, or Museum)</p> </li> <li> <p> <code>MAJ</code> (Her/His
     * Majesty the Queen/King)</p> </li> <li> <p> <code>OMK</code> (Official mark
     * registered in Canada)</p> </li> <li> <p> <code>PLT</code> (Canadian Political
     * Party)</p> </li> <li> <p> <code>PRT</code> (Partnership Registered in
     * Canada)</p> </li> <li> <p> <code>TDM</code> (Trademark registered in Canada)</p>
     * </li> <li> <p> <code>TRD</code> (Canadian Trade Union)</p> </li> <li> <p>
     * <code>TRS</code> (Trust established in Canada)</p> </li> </ul> </li> </ul> </dd>
     * <dt>.es</dt> <dd> <ul> <li> <p> <code>ES_IDENTIFICATION</code> </p> <p>The value
     * of <code>ES_IDENTIFICATION</code> depends on the following values:</p> <ul> <li>
     * <p>The value of <code>ES_LEGAL_FORM</code> </p> </li> <li> <p>The value of
     * <code>ES_IDENTIFICATION_TYPE</code> </p> </li> </ul> <p> <b>If
     * <code>ES_LEGAL_FORM</code> is any value other than <code>INDIVIDUAL</code>:</b>
     * </p> <ul> <li> <p>Specify 1 letter + 8 numbers (CIF [Certificado de
     * Identificación Fiscal])</p> </li> <li> <p>Example: B12345678</p> </li> </ul> <p>
     * <b>If <code>ES_LEGAL_FORM</code> is <code>INDIVIDUAL</code>, the value that you
     * specify for <code>ES_IDENTIFICATION</code> depends on the value of
     * <code>ES_IDENTIFICATION_TYPE</code>:</b> </p> <ul> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>DNI_AND_NIF</code> (for Spanish
     * contacts):</p> <ul> <li> <p>Specify 8 numbers + 1 letter (DNI [Documento
     * Nacional de Identidad], NIF [Número de Identificación Fiscal])</p> </li> <li>
     * <p>Example: 12345678M</p> </li> </ul> </li> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>NIE</code> (for foreigners with
     * legal residence):</p> <ul> <li> <p>Specify 1 letter + 7 numbers + 1 letter ( NIE
     * [Número de Identidad de Extranjero])</p> </li> <li> <p>Example: Y1234567X</p>
     * </li> </ul> </li> <li> <p>If <code>ES_IDENTIFICATION_TYPE</code> is
     * <code>OTHER</code> (for contacts outside of Spain):</p> <ul> <li> <p>Specify a
     * passport number, drivers license number, or national identity card number</p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>ES_IDENTIFICATION_TYPE</code> </p>
     * <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>DNI_AND_NIF</code> (For Spanish contacts)</p> </li> <li> <p>
     * <code>NIE</code> (For foreigners with legal residence)</p> </li> <li> <p>
     * <code>OTHER</code> (For contacts outside of Spain)</p> </li> </ul> </li> <li>
     * <p> <code>ES_LEGAL_FORM</code> </p> <p>Valid values include the following:</p>
     * <ul> <li> <p> <code>ASSOCIATION</code> </p> </li> <li> <p>
     * <code>CENTRAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>CIVIL_SOCIETY</code> </p> </li> <li> <p> <code>COMMUNITY_OF_OWNERS</code>
     * </p> </li> <li> <p> <code>COMMUNITY_PROPERTY</code> </p> </li> <li> <p>
     * <code>CONSULATE</code> </p> </li> <li> <p> <code>COOPERATIVE</code> </p> </li>
     * <li> <p> <code>DESIGNATION_OF_ORIGIN_SUPERVISORY_COUNCIL</code> </p> </li> <li>
     * <p> <code>ECONOMIC_INTEREST_GROUP</code> </p> </li> <li> <p>
     * <code>EMBASSY</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGING_NATURAL_AREAS</code> </p> </li> <li> <p>
     * <code>FARM_PARTNERSHIP</code> </p> </li> <li> <p> <code>FOUNDATION</code> </p>
     * </li> <li> <p> <code>GENERAL_AND_LIMITED_PARTNERSHIP</code> </p> </li> <li> <p>
     * <code>GENERAL_PARTNERSHIP</code> </p> </li> <li> <p> <code>INDIVIDUAL</code>
     * </p> </li> <li> <p> <code>LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>LOCAL_AUTHORITY</code> </p> </li> <li> <p>
     * <code>LOCAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>MUTUAL_INSURANCE_COMPANY</code> </p> </li> <li> <p>
     * <code>NATIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>ORDER_OR_RELIGIOUS_INSTITUTION</code> </p> </li> <li> <p> <code>OTHERS
     * (Only for contacts outside of Spain)</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p>
     * <code>PROFESSIONAL_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LAW_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>REGIONAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>REGIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>SAVINGS_BANK</code> </p> </li> <li> <p> <code>SPANISH_OFFICE</code> </p>
     * </li> <li> <p> <code>SPORTS_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>SPORTS_FEDERATION</code> </p> </li> <li> <p>
     * <code>SPORTS_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>TEMPORARY_ALLIANCE_OF_ENTERPRISES</code> </p> </li> <li> <p>
     * <code>TRADE_UNION</code> </p> </li> <li> <p> <code>WORKER_OWNED_COMPANY</code>
     * </p> </li> <li> <p> <code>WORKER_OWNED_LIMITED_COMPANY</code> </p> </li> </ul>
     * </li> </ul> </dd> <dt>.eu</dt> <dd> <ul> <li> <p> <code>
     * EU_COUNTRY_OF_CITIZENSHIP</code> </p> </li> </ul> </dd> <dt>.fi</dt> <dd> <ul>
     * <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>FI_BUSINESS_NUMBER</code> </p> </li> <li> <p> <code>FI_ID_NUMBER</code>
     * </p> </li> <li> <p> <code>FI_NATIONALITY</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>FINNISH</code> </p> </li> <li> <p>
     * <code>NOT_FINNISH</code> </p> </li> </ul> </li> <li> <p>
     * <code>FI_ORGANIZATION_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>COMPANY</code> </p> </li> <li> <p>
     * <code>CORPORATION</code> </p> </li> <li> <p> <code>GOVERNMENT</code> </p> </li>
     * <li> <p> <code>INSTITUTION</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p> <code>PUBLIC_COMMUNITY</code>
     * </p> </li> <li> <p> <code>TOWNSHIP</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.fr</dt> <dd> <ul> <li> <p> <code>BIRTH_CITY</code> </p> </li> <li> <p>
     * <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>BIRTH_DEPARTMENT</code>: Specify the INSEE code that corresponds with the
     * department where the contact was born. If the contact was born somewhere other
     * than France or its overseas departments, specify <code>99</code>. For more
     * information, including a list of departments and the corresponding INSEE
     * numbers, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Departments_of_France">Departments of
     * France</a>.</p> </li> <li> <p> <code>BRAND_NUMBER</code> </p> </li> </ul> </dd>
     * <dt>.it</dt> <dd> <ul> <li> <p> <code>IT_NATIONALITY</code> </p> </li> <li> <p>
     * <code>IT_PIN</code> </p> </li> <li> <p> <code>IT_REGISTRANT_ENTITY_TYPE</code>
     * </p> <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>FOREIGNERS</code> </p> </li> <li> <p> <code>FREELANCE_WORKERS</code>
     * (Freelance workers and professionals)</p> </li> <li> <p>
     * <code>ITALIAN_COMPANIES</code> (Italian companies and one-person companies)</p>
     * </li> <li> <p> <code>NON_PROFIT_ORGANIZATIONS</code> </p> </li> <li> <p>
     * <code>OTHER_SUBJECTS</code> </p> </li> <li> <p>
     * <code>PUBLIC_ORGANIZATIONS</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.ru</dt> <dd> <ul> <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li>
     * <li> <p> <code>RU_PASSPORT_DATA</code> </p> </li> </ul> </dd> <dt>.se</dt> <dd>
     * <ul> <li> <p> <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>SE_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.sg</dt> <dd> <ul> <li> <p>
     * <code>SG_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.uk, .co.uk, .me.uk, and
     * .org.uk</dt> <dd> <ul> <li> <p> <code>UK_CONTACT_TYPE</code> </p> <p>Valid
     * values include the following:</p> <ul> <li> <p> <code>CRC</code> (UK Corporation
     * by Royal Charter)</p> </li> <li> <p> <code>FCORP</code> (Non-UK Corporation)</p>
     * </li> <li> <p> <code>FIND</code> (Non-UK Individual, representing self)</p>
     * </li> <li> <p> <code>FOTHER</code> (Non-UK Entity that does not fit into any
     * other category)</p> </li> <li> <p> <code>GOV</code> (UK Government Body)</p>
     * </li> <li> <p> <code>IND</code> (UK Individual (representing self))</p> </li>
     * <li> <p> <code>IP</code> (UK Industrial/Provident Registered Company)</p> </li>
     * <li> <p> <code>LLP</code> (UK Limited Liability Partnership)</p> </li> <li> <p>
     * <code>LTD</code> (UK Limited Company)</p> </li> <li> <p> <code>OTHER</code> (UK
     * Entity that does not fit into any other category)</p> </li> <li> <p>
     * <code>PLC</code> (UK Public Limited Company)</p> </li> <li> <p>
     * <code>PTNR</code> (UK Partnership)</p> </li> <li> <p> <code>RCHAR</code> (UK
     * Registered Charity)</p> </li> <li> <p> <code>SCH</code> (UK School)</p> </li>
     * <li> <p> <code>STAT</code> (UK Statutory Body)</p> </li> <li> <p>
     * <code>STRA</code> (UK Sole Trader)</p> </li> </ul> </li> <li> <p>
     * <code>UK_COMPANY_NUMBER</code> </p> </li> </ul> </dd> </dl> <p>In addition, many
     * TLDs require a <code>VAT_NUMBER</code>.</p>
     */
    inline void SetName(ExtraParamName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an additional parameter that is required by a top-level domain.
     * Here are the top-level domains that require additional parameters and the names
     * of the parameters that they require:</p> <dl> <dt>.com.au and .net.au</dt> <dd>
     * <ul> <li> <p> <code>AU_ID_NUMBER</code> </p> </li> <li> <p>
     * <code>AU_ID_TYPE</code> </p> <p>Valid values include the following:</p> <ul>
     * <li> <p> <code>ABN</code> (Australian business number)</p> </li> <li> <p>
     * <code>ACN</code> (Australian company number)</p> </li> <li> <p> <code>TM</code>
     * (Trademark number)</p> </li> </ul> </li> </ul> </dd> <dt>.ca</dt> <dd> <ul> <li>
     * <p> <code>BRAND_NUMBER</code> </p> </li> <li> <p>
     * <code>CA_BUSINESS_ENTITY_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>BANK</code> (Bank)</p> </li> <li> <p>
     * <code>COMMERCIAL_COMPANY</code> (Commercial company)</p> </li> <li> <p>
     * <code>COMPANY</code> (Company)</p> </li> <li> <p> <code>COOPERATION</code>
     * (Cooperation)</p> </li> <li> <p> <code>COOPERATIVE</code> (Cooperative)</p>
     * </li> <li> <p> <code>COOPRIX</code> (Cooprix)</p> </li> <li> <p>
     * <code>CORP</code> (Corporation)</p> </li> <li> <p> <code>CREDIT_UNION</code>
     * (Credit union)</p> </li> <li> <p> <code>FOMIA</code> (Federation of mutual
     * insurance associations)</p> </li> <li> <p> <code>INC</code> (Incorporated)</p>
     * </li> <li> <p> <code>LTD</code> (Limited)</p> </li> <li> <p> <code>LTEE</code>
     * (Limitée)</p> </li> <li> <p> <code>LLC</code> (Limited liability
     * corporation)</p> </li> <li> <p> <code>LLP</code> (Limited liability
     * partnership)</p> </li> <li> <p> <code>LTE</code> (Lte.)</p> </li> <li> <p>
     * <code>MBA</code> (Mutual benefit association)</p> </li> <li> <p>
     * <code>MIC</code> (Mutual insurance company)</p> </li> <li> <p> <code>NFP</code>
     * (Not-for-profit corporation)</p> </li> <li> <p> <code>SA</code> (S.A.)</p> </li>
     * <li> <p> <code>SAVINGS_COMPANY</code> (Savings company)</p> </li> <li> <p>
     * <code>SAVINGS_UNION</code> (Savings union)</p> </li> <li> <p> <code>SARL</code>
     * (Société à responsabilité limitée)</p> </li> <li> <p> <code>TRUST</code>
     * (Trust)</p> </li> <li> <p> <code>ULC</code> (Unlimited liability
     * corporation)</p> </li> </ul> </li> <li> <p> <code>CA_LEGAL_TYPE</code> </p>
     * <p>When <code>ContactType</code> is <code>PERSON</code>, valid values include
     * the following:</p> <ul> <li> <p> <code>ABO</code> (Aboriginal Peoples indigenous
     * to Canada)</p> </li> <li> <p> <code>CCT</code> (Canadian citizen)</p> </li> <li>
     * <p> <code>LGR</code> (Legal Representative of a Canadian Citizen or Permanent
     * Resident)</p> </li> <li> <p> <code>RES</code> (Permanent resident of Canada)</p>
     * </li> </ul> <p>When <code>ContactType</code> is a value other than
     * <code>PERSON</code>, valid values include the following:</p> <ul> <li> <p>
     * <code>ASS</code> (Canadian unincorporated association)</p> </li> <li> <p>
     * <code>CCO</code> (Canadian corporation)</p> </li> <li> <p> <code>EDU</code>
     * (Canadian educational institution)</p> </li> <li> <p> <code>GOV</code>
     * (Government or government entity in Canada)</p> </li> <li> <p> <code>HOP</code>
     * (Canadian Hospital)</p> </li> <li> <p> <code>INB</code> (Indian Band recognized
     * by the Indian Act of Canada)</p> </li> <li> <p> <code>LAM</code> (Canadian
     * Library, Archive, or Museum)</p> </li> <li> <p> <code>MAJ</code> (Her/His
     * Majesty the Queen/King)</p> </li> <li> <p> <code>OMK</code> (Official mark
     * registered in Canada)</p> </li> <li> <p> <code>PLT</code> (Canadian Political
     * Party)</p> </li> <li> <p> <code>PRT</code> (Partnership Registered in
     * Canada)</p> </li> <li> <p> <code>TDM</code> (Trademark registered in Canada)</p>
     * </li> <li> <p> <code>TRD</code> (Canadian Trade Union)</p> </li> <li> <p>
     * <code>TRS</code> (Trust established in Canada)</p> </li> </ul> </li> </ul> </dd>
     * <dt>.es</dt> <dd> <ul> <li> <p> <code>ES_IDENTIFICATION</code> </p> <p>The value
     * of <code>ES_IDENTIFICATION</code> depends on the following values:</p> <ul> <li>
     * <p>The value of <code>ES_LEGAL_FORM</code> </p> </li> <li> <p>The value of
     * <code>ES_IDENTIFICATION_TYPE</code> </p> </li> </ul> <p> <b>If
     * <code>ES_LEGAL_FORM</code> is any value other than <code>INDIVIDUAL</code>:</b>
     * </p> <ul> <li> <p>Specify 1 letter + 8 numbers (CIF [Certificado de
     * Identificación Fiscal])</p> </li> <li> <p>Example: B12345678</p> </li> </ul> <p>
     * <b>If <code>ES_LEGAL_FORM</code> is <code>INDIVIDUAL</code>, the value that you
     * specify for <code>ES_IDENTIFICATION</code> depends on the value of
     * <code>ES_IDENTIFICATION_TYPE</code>:</b> </p> <ul> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>DNI_AND_NIF</code> (for Spanish
     * contacts):</p> <ul> <li> <p>Specify 8 numbers + 1 letter (DNI [Documento
     * Nacional de Identidad], NIF [Número de Identificación Fiscal])</p> </li> <li>
     * <p>Example: 12345678M</p> </li> </ul> </li> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>NIE</code> (for foreigners with
     * legal residence):</p> <ul> <li> <p>Specify 1 letter + 7 numbers + 1 letter ( NIE
     * [Número de Identidad de Extranjero])</p> </li> <li> <p>Example: Y1234567X</p>
     * </li> </ul> </li> <li> <p>If <code>ES_IDENTIFICATION_TYPE</code> is
     * <code>OTHER</code> (for contacts outside of Spain):</p> <ul> <li> <p>Specify a
     * passport number, drivers license number, or national identity card number</p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>ES_IDENTIFICATION_TYPE</code> </p>
     * <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>DNI_AND_NIF</code> (For Spanish contacts)</p> </li> <li> <p>
     * <code>NIE</code> (For foreigners with legal residence)</p> </li> <li> <p>
     * <code>OTHER</code> (For contacts outside of Spain)</p> </li> </ul> </li> <li>
     * <p> <code>ES_LEGAL_FORM</code> </p> <p>Valid values include the following:</p>
     * <ul> <li> <p> <code>ASSOCIATION</code> </p> </li> <li> <p>
     * <code>CENTRAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>CIVIL_SOCIETY</code> </p> </li> <li> <p> <code>COMMUNITY_OF_OWNERS</code>
     * </p> </li> <li> <p> <code>COMMUNITY_PROPERTY</code> </p> </li> <li> <p>
     * <code>CONSULATE</code> </p> </li> <li> <p> <code>COOPERATIVE</code> </p> </li>
     * <li> <p> <code>DESIGNATION_OF_ORIGIN_SUPERVISORY_COUNCIL</code> </p> </li> <li>
     * <p> <code>ECONOMIC_INTEREST_GROUP</code> </p> </li> <li> <p>
     * <code>EMBASSY</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGING_NATURAL_AREAS</code> </p> </li> <li> <p>
     * <code>FARM_PARTNERSHIP</code> </p> </li> <li> <p> <code>FOUNDATION</code> </p>
     * </li> <li> <p> <code>GENERAL_AND_LIMITED_PARTNERSHIP</code> </p> </li> <li> <p>
     * <code>GENERAL_PARTNERSHIP</code> </p> </li> <li> <p> <code>INDIVIDUAL</code>
     * </p> </li> <li> <p> <code>LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>LOCAL_AUTHORITY</code> </p> </li> <li> <p>
     * <code>LOCAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>MUTUAL_INSURANCE_COMPANY</code> </p> </li> <li> <p>
     * <code>NATIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>ORDER_OR_RELIGIOUS_INSTITUTION</code> </p> </li> <li> <p> <code>OTHERS
     * (Only for contacts outside of Spain)</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p>
     * <code>PROFESSIONAL_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LAW_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>REGIONAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>REGIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>SAVINGS_BANK</code> </p> </li> <li> <p> <code>SPANISH_OFFICE</code> </p>
     * </li> <li> <p> <code>SPORTS_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>SPORTS_FEDERATION</code> </p> </li> <li> <p>
     * <code>SPORTS_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>TEMPORARY_ALLIANCE_OF_ENTERPRISES</code> </p> </li> <li> <p>
     * <code>TRADE_UNION</code> </p> </li> <li> <p> <code>WORKER_OWNED_COMPANY</code>
     * </p> </li> <li> <p> <code>WORKER_OWNED_LIMITED_COMPANY</code> </p> </li> </ul>
     * </li> </ul> </dd> <dt>.eu</dt> <dd> <ul> <li> <p> <code>
     * EU_COUNTRY_OF_CITIZENSHIP</code> </p> </li> </ul> </dd> <dt>.fi</dt> <dd> <ul>
     * <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>FI_BUSINESS_NUMBER</code> </p> </li> <li> <p> <code>FI_ID_NUMBER</code>
     * </p> </li> <li> <p> <code>FI_NATIONALITY</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>FINNISH</code> </p> </li> <li> <p>
     * <code>NOT_FINNISH</code> </p> </li> </ul> </li> <li> <p>
     * <code>FI_ORGANIZATION_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>COMPANY</code> </p> </li> <li> <p>
     * <code>CORPORATION</code> </p> </li> <li> <p> <code>GOVERNMENT</code> </p> </li>
     * <li> <p> <code>INSTITUTION</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p> <code>PUBLIC_COMMUNITY</code>
     * </p> </li> <li> <p> <code>TOWNSHIP</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.fr</dt> <dd> <ul> <li> <p> <code>BIRTH_CITY</code> </p> </li> <li> <p>
     * <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>BIRTH_DEPARTMENT</code>: Specify the INSEE code that corresponds with the
     * department where the contact was born. If the contact was born somewhere other
     * than France or its overseas departments, specify <code>99</code>. For more
     * information, including a list of departments and the corresponding INSEE
     * numbers, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Departments_of_France">Departments of
     * France</a>.</p> </li> <li> <p> <code>BRAND_NUMBER</code> </p> </li> </ul> </dd>
     * <dt>.it</dt> <dd> <ul> <li> <p> <code>IT_NATIONALITY</code> </p> </li> <li> <p>
     * <code>IT_PIN</code> </p> </li> <li> <p> <code>IT_REGISTRANT_ENTITY_TYPE</code>
     * </p> <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>FOREIGNERS</code> </p> </li> <li> <p> <code>FREELANCE_WORKERS</code>
     * (Freelance workers and professionals)</p> </li> <li> <p>
     * <code>ITALIAN_COMPANIES</code> (Italian companies and one-person companies)</p>
     * </li> <li> <p> <code>NON_PROFIT_ORGANIZATIONS</code> </p> </li> <li> <p>
     * <code>OTHER_SUBJECTS</code> </p> </li> <li> <p>
     * <code>PUBLIC_ORGANIZATIONS</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.ru</dt> <dd> <ul> <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li>
     * <li> <p> <code>RU_PASSPORT_DATA</code> </p> </li> </ul> </dd> <dt>.se</dt> <dd>
     * <ul> <li> <p> <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>SE_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.sg</dt> <dd> <ul> <li> <p>
     * <code>SG_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.uk, .co.uk, .me.uk, and
     * .org.uk</dt> <dd> <ul> <li> <p> <code>UK_CONTACT_TYPE</code> </p> <p>Valid
     * values include the following:</p> <ul> <li> <p> <code>CRC</code> (UK Corporation
     * by Royal Charter)</p> </li> <li> <p> <code>FCORP</code> (Non-UK Corporation)</p>
     * </li> <li> <p> <code>FIND</code> (Non-UK Individual, representing self)</p>
     * </li> <li> <p> <code>FOTHER</code> (Non-UK Entity that does not fit into any
     * other category)</p> </li> <li> <p> <code>GOV</code> (UK Government Body)</p>
     * </li> <li> <p> <code>IND</code> (UK Individual (representing self))</p> </li>
     * <li> <p> <code>IP</code> (UK Industrial/Provident Registered Company)</p> </li>
     * <li> <p> <code>LLP</code> (UK Limited Liability Partnership)</p> </li> <li> <p>
     * <code>LTD</code> (UK Limited Company)</p> </li> <li> <p> <code>OTHER</code> (UK
     * Entity that does not fit into any other category)</p> </li> <li> <p>
     * <code>PLC</code> (UK Public Limited Company)</p> </li> <li> <p>
     * <code>PTNR</code> (UK Partnership)</p> </li> <li> <p> <code>RCHAR</code> (UK
     * Registered Charity)</p> </li> <li> <p> <code>SCH</code> (UK School)</p> </li>
     * <li> <p> <code>STAT</code> (UK Statutory Body)</p> </li> <li> <p>
     * <code>STRA</code> (UK Sole Trader)</p> </li> </ul> </li> <li> <p>
     * <code>UK_COMPANY_NUMBER</code> </p> </li> </ul> </dd> </dl> <p>In addition, many
     * TLDs require a <code>VAT_NUMBER</code>.</p>
     */
    inline ExtraParam& WithName(const ExtraParamName& value) { SetName(value); return *this;}

    /**
     * <p>The name of an additional parameter that is required by a top-level domain.
     * Here are the top-level domains that require additional parameters and the names
     * of the parameters that they require:</p> <dl> <dt>.com.au and .net.au</dt> <dd>
     * <ul> <li> <p> <code>AU_ID_NUMBER</code> </p> </li> <li> <p>
     * <code>AU_ID_TYPE</code> </p> <p>Valid values include the following:</p> <ul>
     * <li> <p> <code>ABN</code> (Australian business number)</p> </li> <li> <p>
     * <code>ACN</code> (Australian company number)</p> </li> <li> <p> <code>TM</code>
     * (Trademark number)</p> </li> </ul> </li> </ul> </dd> <dt>.ca</dt> <dd> <ul> <li>
     * <p> <code>BRAND_NUMBER</code> </p> </li> <li> <p>
     * <code>CA_BUSINESS_ENTITY_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>BANK</code> (Bank)</p> </li> <li> <p>
     * <code>COMMERCIAL_COMPANY</code> (Commercial company)</p> </li> <li> <p>
     * <code>COMPANY</code> (Company)</p> </li> <li> <p> <code>COOPERATION</code>
     * (Cooperation)</p> </li> <li> <p> <code>COOPERATIVE</code> (Cooperative)</p>
     * </li> <li> <p> <code>COOPRIX</code> (Cooprix)</p> </li> <li> <p>
     * <code>CORP</code> (Corporation)</p> </li> <li> <p> <code>CREDIT_UNION</code>
     * (Credit union)</p> </li> <li> <p> <code>FOMIA</code> (Federation of mutual
     * insurance associations)</p> </li> <li> <p> <code>INC</code> (Incorporated)</p>
     * </li> <li> <p> <code>LTD</code> (Limited)</p> </li> <li> <p> <code>LTEE</code>
     * (Limitée)</p> </li> <li> <p> <code>LLC</code> (Limited liability
     * corporation)</p> </li> <li> <p> <code>LLP</code> (Limited liability
     * partnership)</p> </li> <li> <p> <code>LTE</code> (Lte.)</p> </li> <li> <p>
     * <code>MBA</code> (Mutual benefit association)</p> </li> <li> <p>
     * <code>MIC</code> (Mutual insurance company)</p> </li> <li> <p> <code>NFP</code>
     * (Not-for-profit corporation)</p> </li> <li> <p> <code>SA</code> (S.A.)</p> </li>
     * <li> <p> <code>SAVINGS_COMPANY</code> (Savings company)</p> </li> <li> <p>
     * <code>SAVINGS_UNION</code> (Savings union)</p> </li> <li> <p> <code>SARL</code>
     * (Société à responsabilité limitée)</p> </li> <li> <p> <code>TRUST</code>
     * (Trust)</p> </li> <li> <p> <code>ULC</code> (Unlimited liability
     * corporation)</p> </li> </ul> </li> <li> <p> <code>CA_LEGAL_TYPE</code> </p>
     * <p>When <code>ContactType</code> is <code>PERSON</code>, valid values include
     * the following:</p> <ul> <li> <p> <code>ABO</code> (Aboriginal Peoples indigenous
     * to Canada)</p> </li> <li> <p> <code>CCT</code> (Canadian citizen)</p> </li> <li>
     * <p> <code>LGR</code> (Legal Representative of a Canadian Citizen or Permanent
     * Resident)</p> </li> <li> <p> <code>RES</code> (Permanent resident of Canada)</p>
     * </li> </ul> <p>When <code>ContactType</code> is a value other than
     * <code>PERSON</code>, valid values include the following:</p> <ul> <li> <p>
     * <code>ASS</code> (Canadian unincorporated association)</p> </li> <li> <p>
     * <code>CCO</code> (Canadian corporation)</p> </li> <li> <p> <code>EDU</code>
     * (Canadian educational institution)</p> </li> <li> <p> <code>GOV</code>
     * (Government or government entity in Canada)</p> </li> <li> <p> <code>HOP</code>
     * (Canadian Hospital)</p> </li> <li> <p> <code>INB</code> (Indian Band recognized
     * by the Indian Act of Canada)</p> </li> <li> <p> <code>LAM</code> (Canadian
     * Library, Archive, or Museum)</p> </li> <li> <p> <code>MAJ</code> (Her/His
     * Majesty the Queen/King)</p> </li> <li> <p> <code>OMK</code> (Official mark
     * registered in Canada)</p> </li> <li> <p> <code>PLT</code> (Canadian Political
     * Party)</p> </li> <li> <p> <code>PRT</code> (Partnership Registered in
     * Canada)</p> </li> <li> <p> <code>TDM</code> (Trademark registered in Canada)</p>
     * </li> <li> <p> <code>TRD</code> (Canadian Trade Union)</p> </li> <li> <p>
     * <code>TRS</code> (Trust established in Canada)</p> </li> </ul> </li> </ul> </dd>
     * <dt>.es</dt> <dd> <ul> <li> <p> <code>ES_IDENTIFICATION</code> </p> <p>The value
     * of <code>ES_IDENTIFICATION</code> depends on the following values:</p> <ul> <li>
     * <p>The value of <code>ES_LEGAL_FORM</code> </p> </li> <li> <p>The value of
     * <code>ES_IDENTIFICATION_TYPE</code> </p> </li> </ul> <p> <b>If
     * <code>ES_LEGAL_FORM</code> is any value other than <code>INDIVIDUAL</code>:</b>
     * </p> <ul> <li> <p>Specify 1 letter + 8 numbers (CIF [Certificado de
     * Identificación Fiscal])</p> </li> <li> <p>Example: B12345678</p> </li> </ul> <p>
     * <b>If <code>ES_LEGAL_FORM</code> is <code>INDIVIDUAL</code>, the value that you
     * specify for <code>ES_IDENTIFICATION</code> depends on the value of
     * <code>ES_IDENTIFICATION_TYPE</code>:</b> </p> <ul> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>DNI_AND_NIF</code> (for Spanish
     * contacts):</p> <ul> <li> <p>Specify 8 numbers + 1 letter (DNI [Documento
     * Nacional de Identidad], NIF [Número de Identificación Fiscal])</p> </li> <li>
     * <p>Example: 12345678M</p> </li> </ul> </li> <li> <p>If
     * <code>ES_IDENTIFICATION_TYPE</code> is <code>NIE</code> (for foreigners with
     * legal residence):</p> <ul> <li> <p>Specify 1 letter + 7 numbers + 1 letter ( NIE
     * [Número de Identidad de Extranjero])</p> </li> <li> <p>Example: Y1234567X</p>
     * </li> </ul> </li> <li> <p>If <code>ES_IDENTIFICATION_TYPE</code> is
     * <code>OTHER</code> (for contacts outside of Spain):</p> <ul> <li> <p>Specify a
     * passport number, drivers license number, or national identity card number</p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>ES_IDENTIFICATION_TYPE</code> </p>
     * <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>DNI_AND_NIF</code> (For Spanish contacts)</p> </li> <li> <p>
     * <code>NIE</code> (For foreigners with legal residence)</p> </li> <li> <p>
     * <code>OTHER</code> (For contacts outside of Spain)</p> </li> </ul> </li> <li>
     * <p> <code>ES_LEGAL_FORM</code> </p> <p>Valid values include the following:</p>
     * <ul> <li> <p> <code>ASSOCIATION</code> </p> </li> <li> <p>
     * <code>CENTRAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>CIVIL_SOCIETY</code> </p> </li> <li> <p> <code>COMMUNITY_OF_OWNERS</code>
     * </p> </li> <li> <p> <code>COMMUNITY_PROPERTY</code> </p> </li> <li> <p>
     * <code>CONSULATE</code> </p> </li> <li> <p> <code>COOPERATIVE</code> </p> </li>
     * <li> <p> <code>DESIGNATION_OF_ORIGIN_SUPERVISORY_COUNCIL</code> </p> </li> <li>
     * <p> <code>ECONOMIC_INTEREST_GROUP</code> </p> </li> <li> <p>
     * <code>EMBASSY</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGING_NATURAL_AREAS</code> </p> </li> <li> <p>
     * <code>FARM_PARTNERSHIP</code> </p> </li> <li> <p> <code>FOUNDATION</code> </p>
     * </li> <li> <p> <code>GENERAL_AND_LIMITED_PARTNERSHIP</code> </p> </li> <li> <p>
     * <code>GENERAL_PARTNERSHIP</code> </p> </li> <li> <p> <code>INDIVIDUAL</code>
     * </p> </li> <li> <p> <code>LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>LOCAL_AUTHORITY</code> </p> </li> <li> <p>
     * <code>LOCAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>MUTUAL_INSURANCE_COMPANY</code> </p> </li> <li> <p>
     * <code>NATIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>ORDER_OR_RELIGIOUS_INSTITUTION</code> </p> </li> <li> <p> <code>OTHERS
     * (Only for contacts outside of Spain)</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p>
     * <code>PROFESSIONAL_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LAW_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>PUBLIC_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>REGIONAL_GOVERNMENT_BODY</code> </p> </li> <li> <p>
     * <code>REGIONAL_PUBLIC_ENTITY</code> </p> </li> <li> <p>
     * <code>SAVINGS_BANK</code> </p> </li> <li> <p> <code>SPANISH_OFFICE</code> </p>
     * </li> <li> <p> <code>SPORTS_ASSOCIATION</code> </p> </li> <li> <p>
     * <code>SPORTS_FEDERATION</code> </p> </li> <li> <p>
     * <code>SPORTS_LIMITED_COMPANY</code> </p> </li> <li> <p>
     * <code>TEMPORARY_ALLIANCE_OF_ENTERPRISES</code> </p> </li> <li> <p>
     * <code>TRADE_UNION</code> </p> </li> <li> <p> <code>WORKER_OWNED_COMPANY</code>
     * </p> </li> <li> <p> <code>WORKER_OWNED_LIMITED_COMPANY</code> </p> </li> </ul>
     * </li> </ul> </dd> <dt>.eu</dt> <dd> <ul> <li> <p> <code>
     * EU_COUNTRY_OF_CITIZENSHIP</code> </p> </li> </ul> </dd> <dt>.fi</dt> <dd> <ul>
     * <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>FI_BUSINESS_NUMBER</code> </p> </li> <li> <p> <code>FI_ID_NUMBER</code>
     * </p> </li> <li> <p> <code>FI_NATIONALITY</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>FINNISH</code> </p> </li> <li> <p>
     * <code>NOT_FINNISH</code> </p> </li> </ul> </li> <li> <p>
     * <code>FI_ORGANIZATION_TYPE</code> </p> <p>Valid values include the
     * following:</p> <ul> <li> <p> <code>COMPANY</code> </p> </li> <li> <p>
     * <code>CORPORATION</code> </p> </li> <li> <p> <code>GOVERNMENT</code> </p> </li>
     * <li> <p> <code>INSTITUTION</code> </p> </li> <li> <p>
     * <code>POLITICAL_PARTY</code> </p> </li> <li> <p> <code>PUBLIC_COMMUNITY</code>
     * </p> </li> <li> <p> <code>TOWNSHIP</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.fr</dt> <dd> <ul> <li> <p> <code>BIRTH_CITY</code> </p> </li> <li> <p>
     * <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li> <li> <p>
     * <code>BIRTH_DEPARTMENT</code>: Specify the INSEE code that corresponds with the
     * department where the contact was born. If the contact was born somewhere other
     * than France or its overseas departments, specify <code>99</code>. For more
     * information, including a list of departments and the corresponding INSEE
     * numbers, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Departments_of_France">Departments of
     * France</a>.</p> </li> <li> <p> <code>BRAND_NUMBER</code> </p> </li> </ul> </dd>
     * <dt>.it</dt> <dd> <ul> <li> <p> <code>IT_NATIONALITY</code> </p> </li> <li> <p>
     * <code>IT_PIN</code> </p> </li> <li> <p> <code>IT_REGISTRANT_ENTITY_TYPE</code>
     * </p> <p>Valid values include the following:</p> <ul> <li> <p>
     * <code>FOREIGNERS</code> </p> </li> <li> <p> <code>FREELANCE_WORKERS</code>
     * (Freelance workers and professionals)</p> </li> <li> <p>
     * <code>ITALIAN_COMPANIES</code> (Italian companies and one-person companies)</p>
     * </li> <li> <p> <code>NON_PROFIT_ORGANIZATIONS</code> </p> </li> <li> <p>
     * <code>OTHER_SUBJECTS</code> </p> </li> <li> <p>
     * <code>PUBLIC_ORGANIZATIONS</code> </p> </li> </ul> </li> </ul> </dd>
     * <dt>.ru</dt> <dd> <ul> <li> <p> <code>BIRTH_DATE_IN_YYYY_MM_DD</code> </p> </li>
     * <li> <p> <code>RU_PASSPORT_DATA</code> </p> </li> </ul> </dd> <dt>.se</dt> <dd>
     * <ul> <li> <p> <code>BIRTH_COUNTRY</code> </p> </li> <li> <p>
     * <code>SE_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.sg</dt> <dd> <ul> <li> <p>
     * <code>SG_ID_NUMBER</code> </p> </li> </ul> </dd> <dt>.uk, .co.uk, .me.uk, and
     * .org.uk</dt> <dd> <ul> <li> <p> <code>UK_CONTACT_TYPE</code> </p> <p>Valid
     * values include the following:</p> <ul> <li> <p> <code>CRC</code> (UK Corporation
     * by Royal Charter)</p> </li> <li> <p> <code>FCORP</code> (Non-UK Corporation)</p>
     * </li> <li> <p> <code>FIND</code> (Non-UK Individual, representing self)</p>
     * </li> <li> <p> <code>FOTHER</code> (Non-UK Entity that does not fit into any
     * other category)</p> </li> <li> <p> <code>GOV</code> (UK Government Body)</p>
     * </li> <li> <p> <code>IND</code> (UK Individual (representing self))</p> </li>
     * <li> <p> <code>IP</code> (UK Industrial/Provident Registered Company)</p> </li>
     * <li> <p> <code>LLP</code> (UK Limited Liability Partnership)</p> </li> <li> <p>
     * <code>LTD</code> (UK Limited Company)</p> </li> <li> <p> <code>OTHER</code> (UK
     * Entity that does not fit into any other category)</p> </li> <li> <p>
     * <code>PLC</code> (UK Public Limited Company)</p> </li> <li> <p>
     * <code>PTNR</code> (UK Partnership)</p> </li> <li> <p> <code>RCHAR</code> (UK
     * Registered Charity)</p> </li> <li> <p> <code>SCH</code> (UK School)</p> </li>
     * <li> <p> <code>STAT</code> (UK Statutory Body)</p> </li> <li> <p>
     * <code>STRA</code> (UK Sole Trader)</p> </li> </ul> </li> <li> <p>
     * <code>UK_COMPANY_NUMBER</code> </p> </li> </ul> </dd> </dl> <p>In addition, many
     * TLDs require a <code>VAT_NUMBER</code>.</p>
     */
    inline ExtraParam& WithName(ExtraParamName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline ExtraParam& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline ExtraParam& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value that corresponds with the name of an extra parameter.</p>
     */
    inline ExtraParam& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ExtraParamName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
