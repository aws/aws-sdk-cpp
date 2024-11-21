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
    AWS_CLOUDWATCHLOGS_API Processor();
    AWS_CLOUDWATCHLOGS_API Processor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Processor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-addKeys">
     * addKeys</a> processor in your transformer.</p>
     */
    inline const AddKeys& GetAddKeys() const{ return m_addKeys; }
    inline bool AddKeysHasBeenSet() const { return m_addKeysHasBeenSet; }
    inline void SetAddKeys(const AddKeys& value) { m_addKeysHasBeenSet = true; m_addKeys = value; }
    inline void SetAddKeys(AddKeys&& value) { m_addKeysHasBeenSet = true; m_addKeys = std::move(value); }
    inline Processor& WithAddKeys(const AddKeys& value) { SetAddKeys(value); return *this;}
    inline Processor& WithAddKeys(AddKeys&& value) { SetAddKeys(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-copyValue">
     * copyValue</a> processor in your transformer.</p>
     */
    inline const CopyValue& GetCopyValue() const{ return m_copyValue; }
    inline bool CopyValueHasBeenSet() const { return m_copyValueHasBeenSet; }
    inline void SetCopyValue(const CopyValue& value) { m_copyValueHasBeenSet = true; m_copyValue = value; }
    inline void SetCopyValue(CopyValue&& value) { m_copyValueHasBeenSet = true; m_copyValue = std::move(value); }
    inline Processor& WithCopyValue(const CopyValue& value) { SetCopyValue(value); return *this;}
    inline Processor& WithCopyValue(CopyValue&& value) { SetCopyValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-CSV">
     * CSV</a> processor in your transformer.</p>
     */
    inline const CSV& GetCsv() const{ return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    inline void SetCsv(const CSV& value) { m_csvHasBeenSet = true; m_csv = value; }
    inline void SetCsv(CSV&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }
    inline Processor& WithCsv(const CSV& value) { SetCsv(value); return *this;}
    inline Processor& WithCsv(CSV&& value) { SetCsv(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-datetimeConverter">
     * datetimeConverter</a> processor in your transformer.</p>
     */
    inline const DateTimeConverter& GetDateTimeConverter() const{ return m_dateTimeConverter; }
    inline bool DateTimeConverterHasBeenSet() const { return m_dateTimeConverterHasBeenSet; }
    inline void SetDateTimeConverter(const DateTimeConverter& value) { m_dateTimeConverterHasBeenSet = true; m_dateTimeConverter = value; }
    inline void SetDateTimeConverter(DateTimeConverter&& value) { m_dateTimeConverterHasBeenSet = true; m_dateTimeConverter = std::move(value); }
    inline Processor& WithDateTimeConverter(const DateTimeConverter& value) { SetDateTimeConverter(value); return *this;}
    inline Processor& WithDateTimeConverter(DateTimeConverter&& value) { SetDateTimeConverter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-deleteKeys">
     * deleteKeys</a> processor in your transformer.</p>
     */
    inline const DeleteKeys& GetDeleteKeys() const{ return m_deleteKeys; }
    inline bool DeleteKeysHasBeenSet() const { return m_deleteKeysHasBeenSet; }
    inline void SetDeleteKeys(const DeleteKeys& value) { m_deleteKeysHasBeenSet = true; m_deleteKeys = value; }
    inline void SetDeleteKeys(DeleteKeys&& value) { m_deleteKeysHasBeenSet = true; m_deleteKeys = std::move(value); }
    inline Processor& WithDeleteKeys(const DeleteKeys& value) { SetDeleteKeys(value); return *this;}
    inline Processor& WithDeleteKeys(DeleteKeys&& value) { SetDeleteKeys(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-grok">
     * grok</a> processor in your transformer.</p>
     */
    inline const Grok& GetGrok() const{ return m_grok; }
    inline bool GrokHasBeenSet() const { return m_grokHasBeenSet; }
    inline void SetGrok(const Grok& value) { m_grokHasBeenSet = true; m_grok = value; }
    inline void SetGrok(Grok&& value) { m_grokHasBeenSet = true; m_grok = std::move(value); }
    inline Processor& WithGrok(const Grok& value) { SetGrok(value); return *this;}
    inline Processor& WithGrok(Grok&& value) { SetGrok(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-listToMap">
     * listToMap</a> processor in your transformer.</p>
     */
    inline const ListToMap& GetListToMap() const{ return m_listToMap; }
    inline bool ListToMapHasBeenSet() const { return m_listToMapHasBeenSet; }
    inline void SetListToMap(const ListToMap& value) { m_listToMapHasBeenSet = true; m_listToMap = value; }
    inline void SetListToMap(ListToMap&& value) { m_listToMapHasBeenSet = true; m_listToMap = std::move(value); }
    inline Processor& WithListToMap(const ListToMap& value) { SetListToMap(value); return *this;}
    inline Processor& WithListToMap(ListToMap&& value) { SetListToMap(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-lowerCaseString">
     * lowerCaseString</a> processor in your transformer.</p>
     */
    inline const LowerCaseString& GetLowerCaseString() const{ return m_lowerCaseString; }
    inline bool LowerCaseStringHasBeenSet() const { return m_lowerCaseStringHasBeenSet; }
    inline void SetLowerCaseString(const LowerCaseString& value) { m_lowerCaseStringHasBeenSet = true; m_lowerCaseString = value; }
    inline void SetLowerCaseString(LowerCaseString&& value) { m_lowerCaseStringHasBeenSet = true; m_lowerCaseString = std::move(value); }
    inline Processor& WithLowerCaseString(const LowerCaseString& value) { SetLowerCaseString(value); return *this;}
    inline Processor& WithLowerCaseString(LowerCaseString&& value) { SetLowerCaseString(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-moveKeys">
     * moveKeys</a> processor in your transformer.</p>
     */
    inline const MoveKeys& GetMoveKeys() const{ return m_moveKeys; }
    inline bool MoveKeysHasBeenSet() const { return m_moveKeysHasBeenSet; }
    inline void SetMoveKeys(const MoveKeys& value) { m_moveKeysHasBeenSet = true; m_moveKeys = value; }
    inline void SetMoveKeys(MoveKeys&& value) { m_moveKeysHasBeenSet = true; m_moveKeys = std::move(value); }
    inline Processor& WithMoveKeys(const MoveKeys& value) { SetMoveKeys(value); return *this;}
    inline Processor& WithMoveKeys(MoveKeys&& value) { SetMoveKeys(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseCloudfront">
     * parseCloudfront</a> processor in your transformer.</p> <p>If you use this
     * processor, it must be the first processor in your transformer.</p>
     */
    inline const ParseCloudfront& GetParseCloudfront() const{ return m_parseCloudfront; }
    inline bool ParseCloudfrontHasBeenSet() const { return m_parseCloudfrontHasBeenSet; }
    inline void SetParseCloudfront(const ParseCloudfront& value) { m_parseCloudfrontHasBeenSet = true; m_parseCloudfront = value; }
    inline void SetParseCloudfront(ParseCloudfront&& value) { m_parseCloudfrontHasBeenSet = true; m_parseCloudfront = std::move(value); }
    inline Processor& WithParseCloudfront(const ParseCloudfront& value) { SetParseCloudfront(value); return *this;}
    inline Processor& WithParseCloudfront(ParseCloudfront&& value) { SetParseCloudfront(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseJSON">
     * parseJSON</a> processor in your transformer.</p>
     */
    inline const ParseJSON& GetParseJSON() const{ return m_parseJSON; }
    inline bool ParseJSONHasBeenSet() const { return m_parseJSONHasBeenSet; }
    inline void SetParseJSON(const ParseJSON& value) { m_parseJSONHasBeenSet = true; m_parseJSON = value; }
    inline void SetParseJSON(ParseJSON&& value) { m_parseJSONHasBeenSet = true; m_parseJSON = std::move(value); }
    inline Processor& WithParseJSON(const ParseJSON& value) { SetParseJSON(value); return *this;}
    inline Processor& WithParseJSON(ParseJSON&& value) { SetParseJSON(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseKeyValue">
     * parseKeyValue</a> processor in your transformer.</p>
     */
    inline const ParseKeyValue& GetParseKeyValue() const{ return m_parseKeyValue; }
    inline bool ParseKeyValueHasBeenSet() const { return m_parseKeyValueHasBeenSet; }
    inline void SetParseKeyValue(const ParseKeyValue& value) { m_parseKeyValueHasBeenSet = true; m_parseKeyValue = value; }
    inline void SetParseKeyValue(ParseKeyValue&& value) { m_parseKeyValueHasBeenSet = true; m_parseKeyValue = std::move(value); }
    inline Processor& WithParseKeyValue(const ParseKeyValue& value) { SetParseKeyValue(value); return *this;}
    inline Processor& WithParseKeyValue(ParseKeyValue&& value) { SetParseKeyValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseRoute53">
     * parseRoute53</a> processor in your transformer.</p> <p>If you use this
     * processor, it must be the first processor in your transformer.</p>
     */
    inline const ParseRoute53& GetParseRoute53() const{ return m_parseRoute53; }
    inline bool ParseRoute53HasBeenSet() const { return m_parseRoute53HasBeenSet; }
    inline void SetParseRoute53(const ParseRoute53& value) { m_parseRoute53HasBeenSet = true; m_parseRoute53 = value; }
    inline void SetParseRoute53(ParseRoute53&& value) { m_parseRoute53HasBeenSet = true; m_parseRoute53 = std::move(value); }
    inline Processor& WithParseRoute53(const ParseRoute53& value) { SetParseRoute53(value); return *this;}
    inline Processor& WithParseRoute53(ParseRoute53&& value) { SetParseRoute53(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parsePostGres">
     * parsePostGres</a> processor in your transformer.</p> <p>If you use this
     * processor, it must be the first processor in your transformer.</p>
     */
    inline const ParsePostgres& GetParsePostgres() const{ return m_parsePostgres; }
    inline bool ParsePostgresHasBeenSet() const { return m_parsePostgresHasBeenSet; }
    inline void SetParsePostgres(const ParsePostgres& value) { m_parsePostgresHasBeenSet = true; m_parsePostgres = value; }
    inline void SetParsePostgres(ParsePostgres&& value) { m_parsePostgresHasBeenSet = true; m_parsePostgres = std::move(value); }
    inline Processor& WithParsePostgres(const ParsePostgres& value) { SetParsePostgres(value); return *this;}
    inline Processor& WithParsePostgres(ParsePostgres&& value) { SetParsePostgres(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseVPC">
     * parseVPC</a> processor in your transformer.</p> <p>If you use this processor, it
     * must be the first processor in your transformer.</p>
     */
    inline const ParseVPC& GetParseVPC() const{ return m_parseVPC; }
    inline bool ParseVPCHasBeenSet() const { return m_parseVPCHasBeenSet; }
    inline void SetParseVPC(const ParseVPC& value) { m_parseVPCHasBeenSet = true; m_parseVPC = value; }
    inline void SetParseVPC(ParseVPC&& value) { m_parseVPCHasBeenSet = true; m_parseVPC = std::move(value); }
    inline Processor& WithParseVPC(const ParseVPC& value) { SetParseVPC(value); return *this;}
    inline Processor& WithParseVPC(ParseVPC&& value) { SetParseVPC(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseWAF">
     * parseWAF</a> processor in your transformer.</p> <p>If you use this processor, it
     * must be the first processor in your transformer.</p>
     */
    inline const ParseWAF& GetParseWAF() const{ return m_parseWAF; }
    inline bool ParseWAFHasBeenSet() const { return m_parseWAFHasBeenSet; }
    inline void SetParseWAF(const ParseWAF& value) { m_parseWAFHasBeenSet = true; m_parseWAF = value; }
    inline void SetParseWAF(ParseWAF&& value) { m_parseWAFHasBeenSet = true; m_parseWAF = std::move(value); }
    inline Processor& WithParseWAF(const ParseWAF& value) { SetParseWAF(value); return *this;}
    inline Processor& WithParseWAF(ParseWAF&& value) { SetParseWAF(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-renameKeys">
     * renameKeys</a> processor in your transformer.</p>
     */
    inline const RenameKeys& GetRenameKeys() const{ return m_renameKeys; }
    inline bool RenameKeysHasBeenSet() const { return m_renameKeysHasBeenSet; }
    inline void SetRenameKeys(const RenameKeys& value) { m_renameKeysHasBeenSet = true; m_renameKeys = value; }
    inline void SetRenameKeys(RenameKeys&& value) { m_renameKeysHasBeenSet = true; m_renameKeys = std::move(value); }
    inline Processor& WithRenameKeys(const RenameKeys& value) { SetRenameKeys(value); return *this;}
    inline Processor& WithRenameKeys(RenameKeys&& value) { SetRenameKeys(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-splitString">
     * splitString</a> processor in your transformer.</p>
     */
    inline const SplitString& GetSplitString() const{ return m_splitString; }
    inline bool SplitStringHasBeenSet() const { return m_splitStringHasBeenSet; }
    inline void SetSplitString(const SplitString& value) { m_splitStringHasBeenSet = true; m_splitString = value; }
    inline void SetSplitString(SplitString&& value) { m_splitStringHasBeenSet = true; m_splitString = std::move(value); }
    inline Processor& WithSplitString(const SplitString& value) { SetSplitString(value); return *this;}
    inline Processor& WithSplitString(SplitString&& value) { SetSplitString(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-substituteString">
     * substituteString</a> processor in your transformer.</p>
     */
    inline const SubstituteString& GetSubstituteString() const{ return m_substituteString; }
    inline bool SubstituteStringHasBeenSet() const { return m_substituteStringHasBeenSet; }
    inline void SetSubstituteString(const SubstituteString& value) { m_substituteStringHasBeenSet = true; m_substituteString = value; }
    inline void SetSubstituteString(SubstituteString&& value) { m_substituteStringHasBeenSet = true; m_substituteString = std::move(value); }
    inline Processor& WithSubstituteString(const SubstituteString& value) { SetSubstituteString(value); return *this;}
    inline Processor& WithSubstituteString(SubstituteString&& value) { SetSubstituteString(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-trimString">
     * trimString</a> processor in your transformer.</p>
     */
    inline const TrimString& GetTrimString() const{ return m_trimString; }
    inline bool TrimStringHasBeenSet() const { return m_trimStringHasBeenSet; }
    inline void SetTrimString(const TrimString& value) { m_trimStringHasBeenSet = true; m_trimString = value; }
    inline void SetTrimString(TrimString&& value) { m_trimStringHasBeenSet = true; m_trimString = std::move(value); }
    inline Processor& WithTrimString(const TrimString& value) { SetTrimString(value); return *this;}
    inline Processor& WithTrimString(TrimString&& value) { SetTrimString(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-typeConverter">
     * typeConverter</a> processor in your transformer.</p>
     */
    inline const TypeConverter& GetTypeConverter() const{ return m_typeConverter; }
    inline bool TypeConverterHasBeenSet() const { return m_typeConverterHasBeenSet; }
    inline void SetTypeConverter(const TypeConverter& value) { m_typeConverterHasBeenSet = true; m_typeConverter = value; }
    inline void SetTypeConverter(TypeConverter&& value) { m_typeConverterHasBeenSet = true; m_typeConverter = std::move(value); }
    inline Processor& WithTypeConverter(const TypeConverter& value) { SetTypeConverter(value); return *this;}
    inline Processor& WithTypeConverter(TypeConverter&& value) { SetTypeConverter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-upperCaseString">
     * upperCaseString</a> processor in your transformer.</p>
     */
    inline const UpperCaseString& GetUpperCaseString() const{ return m_upperCaseString; }
    inline bool UpperCaseStringHasBeenSet() const { return m_upperCaseStringHasBeenSet; }
    inline void SetUpperCaseString(const UpperCaseString& value) { m_upperCaseStringHasBeenSet = true; m_upperCaseString = value; }
    inline void SetUpperCaseString(UpperCaseString&& value) { m_upperCaseStringHasBeenSet = true; m_upperCaseString = std::move(value); }
    inline Processor& WithUpperCaseString(const UpperCaseString& value) { SetUpperCaseString(value); return *this;}
    inline Processor& WithUpperCaseString(UpperCaseString&& value) { SetUpperCaseString(std::move(value)); return *this;}
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
