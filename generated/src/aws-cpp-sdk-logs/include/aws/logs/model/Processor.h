/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/AddKeys.h>
#include <aws/logs/model/CopyValue.h>
#include <aws/logs/model/CSV.h>
#include <aws/logs/model/DateTimeConverter.h>
#include <aws/logs/model/DeleteKeys.h>
#include <aws/logs/model/Grok.h>
#include <aws/logs/model/ListToMap.h>
#include <aws/logs/model/LowerCaseString.h>
#include <aws/logs/model/MoveKeys.h>
#include <aws/logs/model/ParseCloudfront.h>
#include <aws/logs/model/ParseJSON.h>
#include <aws/logs/model/ParseKeyValue.h>
#include <aws/logs/model/ParseRoute53.h>
#include <aws/logs/model/ParseToOCSF.h>
#include <aws/logs/model/ParsePostgres.h>
#include <aws/logs/model/ParseVPC.h>
#include <aws/logs/model/ParseWAF.h>
#include <aws/logs/model/RenameKeys.h>
#include <aws/logs/model/SplitString.h>
#include <aws/logs/model/SubstituteString.h>
#include <aws/logs/model/TrimString.h>
#include <aws/logs/model/TypeConverter.h>
#include <aws/logs/model/UpperCaseString.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains the information about one processor in a log
   * transformer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Processor">AWS API
   * Reference</a></p>
   */
  class Processor
  {
  public:
    AWS_CLOUDWATCHLOGS_API Processor() = default;
    AWS_CLOUDWATCHLOGS_API Processor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Processor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-addKeys">
     * addKeys</a> processor in your transformer.</p>
     */
    inline const AddKeys& GetAddKeys() const { return m_addKeys; }
    inline bool AddKeysHasBeenSet() const { return m_addKeysHasBeenSet; }
    template<typename AddKeysT = AddKeys>
    void SetAddKeys(AddKeysT&& value) { m_addKeysHasBeenSet = true; m_addKeys = std::forward<AddKeysT>(value); }
    template<typename AddKeysT = AddKeys>
    Processor& WithAddKeys(AddKeysT&& value) { SetAddKeys(std::forward<AddKeysT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-copyValue">
     * copyValue</a> processor in your transformer.</p>
     */
    inline const CopyValue& GetCopyValue() const { return m_copyValue; }
    inline bool CopyValueHasBeenSet() const { return m_copyValueHasBeenSet; }
    template<typename CopyValueT = CopyValue>
    void SetCopyValue(CopyValueT&& value) { m_copyValueHasBeenSet = true; m_copyValue = std::forward<CopyValueT>(value); }
    template<typename CopyValueT = CopyValue>
    Processor& WithCopyValue(CopyValueT&& value) { SetCopyValue(std::forward<CopyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-CSV">
     * CSV</a> processor in your transformer.</p>
     */
    inline const CSV& GetCsv() const { return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    template<typename CsvT = CSV>
    void SetCsv(CsvT&& value) { m_csvHasBeenSet = true; m_csv = std::forward<CsvT>(value); }
    template<typename CsvT = CSV>
    Processor& WithCsv(CsvT&& value) { SetCsv(std::forward<CsvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-datetimeConverter">
     * datetimeConverter</a> processor in your transformer.</p>
     */
    inline const DateTimeConverter& GetDateTimeConverter() const { return m_dateTimeConverter; }
    inline bool DateTimeConverterHasBeenSet() const { return m_dateTimeConverterHasBeenSet; }
    template<typename DateTimeConverterT = DateTimeConverter>
    void SetDateTimeConverter(DateTimeConverterT&& value) { m_dateTimeConverterHasBeenSet = true; m_dateTimeConverter = std::forward<DateTimeConverterT>(value); }
    template<typename DateTimeConverterT = DateTimeConverter>
    Processor& WithDateTimeConverter(DateTimeConverterT&& value) { SetDateTimeConverter(std::forward<DateTimeConverterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-deleteKeys">
     * deleteKeys</a> processor in your transformer.</p>
     */
    inline const DeleteKeys& GetDeleteKeys() const { return m_deleteKeys; }
    inline bool DeleteKeysHasBeenSet() const { return m_deleteKeysHasBeenSet; }
    template<typename DeleteKeysT = DeleteKeys>
    void SetDeleteKeys(DeleteKeysT&& value) { m_deleteKeysHasBeenSet = true; m_deleteKeys = std::forward<DeleteKeysT>(value); }
    template<typename DeleteKeysT = DeleteKeys>
    Processor& WithDeleteKeys(DeleteKeysT&& value) { SetDeleteKeys(std::forward<DeleteKeysT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-grok">
     * grok</a> processor in your transformer.</p>
     */
    inline const Grok& GetGrok() const { return m_grok; }
    inline bool GrokHasBeenSet() const { return m_grokHasBeenSet; }
    template<typename GrokT = Grok>
    void SetGrok(GrokT&& value) { m_grokHasBeenSet = true; m_grok = std::forward<GrokT>(value); }
    template<typename GrokT = Grok>
    Processor& WithGrok(GrokT&& value) { SetGrok(std::forward<GrokT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-listToMap">
     * listToMap</a> processor in your transformer.</p>
     */
    inline const ListToMap& GetListToMap() const { return m_listToMap; }
    inline bool ListToMapHasBeenSet() const { return m_listToMapHasBeenSet; }
    template<typename ListToMapT = ListToMap>
    void SetListToMap(ListToMapT&& value) { m_listToMapHasBeenSet = true; m_listToMap = std::forward<ListToMapT>(value); }
    template<typename ListToMapT = ListToMap>
    Processor& WithListToMap(ListToMapT&& value) { SetListToMap(std::forward<ListToMapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-lowerCaseString">
     * lowerCaseString</a> processor in your transformer.</p>
     */
    inline const LowerCaseString& GetLowerCaseString() const { return m_lowerCaseString; }
    inline bool LowerCaseStringHasBeenSet() const { return m_lowerCaseStringHasBeenSet; }
    template<typename LowerCaseStringT = LowerCaseString>
    void SetLowerCaseString(LowerCaseStringT&& value) { m_lowerCaseStringHasBeenSet = true; m_lowerCaseString = std::forward<LowerCaseStringT>(value); }
    template<typename LowerCaseStringT = LowerCaseString>
    Processor& WithLowerCaseString(LowerCaseStringT&& value) { SetLowerCaseString(std::forward<LowerCaseStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-moveKeys">
     * moveKeys</a> processor in your transformer.</p>
     */
    inline const MoveKeys& GetMoveKeys() const { return m_moveKeys; }
    inline bool MoveKeysHasBeenSet() const { return m_moveKeysHasBeenSet; }
    template<typename MoveKeysT = MoveKeys>
    void SetMoveKeys(MoveKeysT&& value) { m_moveKeysHasBeenSet = true; m_moveKeys = std::forward<MoveKeysT>(value); }
    template<typename MoveKeysT = MoveKeys>
    Processor& WithMoveKeys(MoveKeysT&& value) { SetMoveKeys(std::forward<MoveKeysT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseCloudfront">
     * parseCloudfront</a> processor in your transformer.</p> <p>If you use this
     * processor, it must be the first processor in your transformer.</p>
     */
    inline const ParseCloudfront& GetParseCloudfront() const { return m_parseCloudfront; }
    inline bool ParseCloudfrontHasBeenSet() const { return m_parseCloudfrontHasBeenSet; }
    template<typename ParseCloudfrontT = ParseCloudfront>
    void SetParseCloudfront(ParseCloudfrontT&& value) { m_parseCloudfrontHasBeenSet = true; m_parseCloudfront = std::forward<ParseCloudfrontT>(value); }
    template<typename ParseCloudfrontT = ParseCloudfront>
    Processor& WithParseCloudfront(ParseCloudfrontT&& value) { SetParseCloudfront(std::forward<ParseCloudfrontT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseJSON">
     * parseJSON</a> processor in your transformer.</p>
     */
    inline const ParseJSON& GetParseJSON() const { return m_parseJSON; }
    inline bool ParseJSONHasBeenSet() const { return m_parseJSONHasBeenSet; }
    template<typename ParseJSONT = ParseJSON>
    void SetParseJSON(ParseJSONT&& value) { m_parseJSONHasBeenSet = true; m_parseJSON = std::forward<ParseJSONT>(value); }
    template<typename ParseJSONT = ParseJSON>
    Processor& WithParseJSON(ParseJSONT&& value) { SetParseJSON(std::forward<ParseJSONT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseKeyValue">
     * parseKeyValue</a> processor in your transformer.</p>
     */
    inline const ParseKeyValue& GetParseKeyValue() const { return m_parseKeyValue; }
    inline bool ParseKeyValueHasBeenSet() const { return m_parseKeyValueHasBeenSet; }
    template<typename ParseKeyValueT = ParseKeyValue>
    void SetParseKeyValue(ParseKeyValueT&& value) { m_parseKeyValueHasBeenSet = true; m_parseKeyValue = std::forward<ParseKeyValueT>(value); }
    template<typename ParseKeyValueT = ParseKeyValue>
    Processor& WithParseKeyValue(ParseKeyValueT&& value) { SetParseKeyValue(std::forward<ParseKeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseRoute53">
     * parseRoute53</a> processor in your transformer.</p> <p>If you use this
     * processor, it must be the first processor in your transformer.</p>
     */
    inline const ParseRoute53& GetParseRoute53() const { return m_parseRoute53; }
    inline bool ParseRoute53HasBeenSet() const { return m_parseRoute53HasBeenSet; }
    template<typename ParseRoute53T = ParseRoute53>
    void SetParseRoute53(ParseRoute53T&& value) { m_parseRoute53HasBeenSet = true; m_parseRoute53 = std::forward<ParseRoute53T>(value); }
    template<typename ParseRoute53T = ParseRoute53>
    Processor& WithParseRoute53(ParseRoute53T&& value) { SetParseRoute53(std::forward<ParseRoute53T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to convert logs into Open Cybersecurity Schema (OCSF)
     * format.</p>
     */
    inline const ParseToOCSF& GetParseToOCSF() const { return m_parseToOCSF; }
    inline bool ParseToOCSFHasBeenSet() const { return m_parseToOCSFHasBeenSet; }
    template<typename ParseToOCSFT = ParseToOCSF>
    void SetParseToOCSF(ParseToOCSFT&& value) { m_parseToOCSFHasBeenSet = true; m_parseToOCSF = std::forward<ParseToOCSFT>(value); }
    template<typename ParseToOCSFT = ParseToOCSF>
    Processor& WithParseToOCSF(ParseToOCSFT&& value) { SetParseToOCSF(std::forward<ParseToOCSFT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parsePostGres">
     * parsePostGres</a> processor in your transformer.</p> <p>If you use this
     * processor, it must be the first processor in your transformer.</p>
     */
    inline const ParsePostgres& GetParsePostgres() const { return m_parsePostgres; }
    inline bool ParsePostgresHasBeenSet() const { return m_parsePostgresHasBeenSet; }
    template<typename ParsePostgresT = ParsePostgres>
    void SetParsePostgres(ParsePostgresT&& value) { m_parsePostgresHasBeenSet = true; m_parsePostgres = std::forward<ParsePostgresT>(value); }
    template<typename ParsePostgresT = ParsePostgres>
    Processor& WithParsePostgres(ParsePostgresT&& value) { SetParsePostgres(std::forward<ParsePostgresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseVPC">
     * parseVPC</a> processor in your transformer.</p> <p>If you use this processor, it
     * must be the first processor in your transformer.</p>
     */
    inline const ParseVPC& GetParseVPC() const { return m_parseVPC; }
    inline bool ParseVPCHasBeenSet() const { return m_parseVPCHasBeenSet; }
    template<typename ParseVPCT = ParseVPC>
    void SetParseVPC(ParseVPCT&& value) { m_parseVPCHasBeenSet = true; m_parseVPC = std::forward<ParseVPCT>(value); }
    template<typename ParseVPCT = ParseVPC>
    Processor& WithParseVPC(ParseVPCT&& value) { SetParseVPC(std::forward<ParseVPCT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseWAF">
     * parseWAF</a> processor in your transformer.</p> <p>If you use this processor, it
     * must be the first processor in your transformer.</p>
     */
    inline const ParseWAF& GetParseWAF() const { return m_parseWAF; }
    inline bool ParseWAFHasBeenSet() const { return m_parseWAFHasBeenSet; }
    template<typename ParseWAFT = ParseWAF>
    void SetParseWAF(ParseWAFT&& value) { m_parseWAFHasBeenSet = true; m_parseWAF = std::forward<ParseWAFT>(value); }
    template<typename ParseWAFT = ParseWAF>
    Processor& WithParseWAF(ParseWAFT&& value) { SetParseWAF(std::forward<ParseWAFT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-renameKeys">
     * renameKeys</a> processor in your transformer.</p>
     */
    inline const RenameKeys& GetRenameKeys() const { return m_renameKeys; }
    inline bool RenameKeysHasBeenSet() const { return m_renameKeysHasBeenSet; }
    template<typename RenameKeysT = RenameKeys>
    void SetRenameKeys(RenameKeysT&& value) { m_renameKeysHasBeenSet = true; m_renameKeys = std::forward<RenameKeysT>(value); }
    template<typename RenameKeysT = RenameKeys>
    Processor& WithRenameKeys(RenameKeysT&& value) { SetRenameKeys(std::forward<RenameKeysT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-splitString">
     * splitString</a> processor in your transformer.</p>
     */
    inline const SplitString& GetSplitString() const { return m_splitString; }
    inline bool SplitStringHasBeenSet() const { return m_splitStringHasBeenSet; }
    template<typename SplitStringT = SplitString>
    void SetSplitString(SplitStringT&& value) { m_splitStringHasBeenSet = true; m_splitString = std::forward<SplitStringT>(value); }
    template<typename SplitStringT = SplitString>
    Processor& WithSplitString(SplitStringT&& value) { SetSplitString(std::forward<SplitStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-substituteString">
     * substituteString</a> processor in your transformer.</p>
     */
    inline const SubstituteString& GetSubstituteString() const { return m_substituteString; }
    inline bool SubstituteStringHasBeenSet() const { return m_substituteStringHasBeenSet; }
    template<typename SubstituteStringT = SubstituteString>
    void SetSubstituteString(SubstituteStringT&& value) { m_substituteStringHasBeenSet = true; m_substituteString = std::forward<SubstituteStringT>(value); }
    template<typename SubstituteStringT = SubstituteString>
    Processor& WithSubstituteString(SubstituteStringT&& value) { SetSubstituteString(std::forward<SubstituteStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-trimString">
     * trimString</a> processor in your transformer.</p>
     */
    inline const TrimString& GetTrimString() const { return m_trimString; }
    inline bool TrimStringHasBeenSet() const { return m_trimStringHasBeenSet; }
    template<typename TrimStringT = TrimString>
    void SetTrimString(TrimStringT&& value) { m_trimStringHasBeenSet = true; m_trimString = std::forward<TrimStringT>(value); }
    template<typename TrimStringT = TrimString>
    Processor& WithTrimString(TrimStringT&& value) { SetTrimString(std::forward<TrimStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-typeConverter">
     * typeConverter</a> processor in your transformer.</p>
     */
    inline const TypeConverter& GetTypeConverter() const { return m_typeConverter; }
    inline bool TypeConverterHasBeenSet() const { return m_typeConverterHasBeenSet; }
    template<typename TypeConverterT = TypeConverter>
    void SetTypeConverter(TypeConverterT&& value) { m_typeConverterHasBeenSet = true; m_typeConverter = std::forward<TypeConverterT>(value); }
    template<typename TypeConverterT = TypeConverter>
    Processor& WithTypeConverter(TypeConverterT&& value) { SetTypeConverter(std::forward<TypeConverterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-upperCaseString">
     * upperCaseString</a> processor in your transformer.</p>
     */
    inline const UpperCaseString& GetUpperCaseString() const { return m_upperCaseString; }
    inline bool UpperCaseStringHasBeenSet() const { return m_upperCaseStringHasBeenSet; }
    template<typename UpperCaseStringT = UpperCaseString>
    void SetUpperCaseString(UpperCaseStringT&& value) { m_upperCaseStringHasBeenSet = true; m_upperCaseString = std::forward<UpperCaseStringT>(value); }
    template<typename UpperCaseStringT = UpperCaseString>
    Processor& WithUpperCaseString(UpperCaseStringT&& value) { SetUpperCaseString(std::forward<UpperCaseStringT>(value)); return *this;}
    ///@}
  private:

    AddKeys m_addKeys;
    bool m_addKeysHasBeenSet = false;

    CopyValue m_copyValue;
    bool m_copyValueHasBeenSet = false;

    CSV m_csv;
    bool m_csvHasBeenSet = false;

    DateTimeConverter m_dateTimeConverter;
    bool m_dateTimeConverterHasBeenSet = false;

    DeleteKeys m_deleteKeys;
    bool m_deleteKeysHasBeenSet = false;

    Grok m_grok;
    bool m_grokHasBeenSet = false;

    ListToMap m_listToMap;
    bool m_listToMapHasBeenSet = false;

    LowerCaseString m_lowerCaseString;
    bool m_lowerCaseStringHasBeenSet = false;

    MoveKeys m_moveKeys;
    bool m_moveKeysHasBeenSet = false;

    ParseCloudfront m_parseCloudfront;
    bool m_parseCloudfrontHasBeenSet = false;

    ParseJSON m_parseJSON;
    bool m_parseJSONHasBeenSet = false;

    ParseKeyValue m_parseKeyValue;
    bool m_parseKeyValueHasBeenSet = false;

    ParseRoute53 m_parseRoute53;
    bool m_parseRoute53HasBeenSet = false;

    ParseToOCSF m_parseToOCSF;
    bool m_parseToOCSFHasBeenSet = false;

    ParsePostgres m_parsePostgres;
    bool m_parsePostgresHasBeenSet = false;

    ParseVPC m_parseVPC;
    bool m_parseVPCHasBeenSet = false;

    ParseWAF m_parseWAF;
    bool m_parseWAFHasBeenSet = false;

    RenameKeys m_renameKeys;
    bool m_renameKeysHasBeenSet = false;

    SplitString m_splitString;
    bool m_splitStringHasBeenSet = false;

    SubstituteString m_substituteString;
    bool m_substituteStringHasBeenSet = false;

    TrimString m_trimString;
    bool m_trimStringHasBeenSet = false;

    TypeConverter m_typeConverter;
    bool m_typeConverterHasBeenSet = false;

    UpperCaseString m_upperCaseString;
    bool m_upperCaseStringHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
